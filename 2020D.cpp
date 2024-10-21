#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

class DSU{
private:
    vi par, size;
public:
    DSU (int n){
        par.resize(n);
        for(int i=0; i<n; i++){
            par[i] = i;
        }
        size.resize(n, 1);
    }
    int find(int u){
        if(u == par[u]) return u;
        else return par[u] = find(par[u]);
    }
    void union_size(int a, int b){
        a = find(a);
        b = find(b);
        if(a == b) return;
        if(size[a] < size[b]){
            par[a] = b;
            size[b] += size[a];
        }else{
            par[b] = a;
            size[a] += size[b];
        }
    }
    int num_components(){
        int count = 0;
        for(int i=0; i<par.size(); i++){
            if(par[i] == i) count++;
        }
        return count;
    }
};

void solve(){

    int n, m;
    cin>>n>>m;
    DSU dsu = DSU(n);
    map<pair<int, int>, set<pair<int, int>>> v;
    for(int i=0; i<m; i++){
        int a, d, k;
        cin>>a>>d>>k;
        a--;
        if(!k) continue;
        v[{d, a%d}].insert({a, a+d*k});
    }

    for(int i=1; i<=10; i++){
        for(int k=0; k<i; k++){
            if(v.find({i, k}) == v.end()) continue;
            vector<pair<int, int>> temp;
            auto last = *v[{i, k}].begin();
            v[{i, k}].erase(last);
            while(!v[{i, k}].empty()){
                auto next = *v[{i, k}].begin();
                v[{i, k}].erase(next);
                if(last.second>=next.first){
                    last.second = max(last.second, next.second);
                }else{
                    temp.push_back(last);
                    last = next;
                }
            }
            temp.push_back(last);
            for(auto [start, end]:temp){
                // cout<<i<<" "<<start<<" "<<end<<nl;
                for(int j=start; j<=end; j+=i){
                    dsu.union_size(start, j);
                }
            }
        }
    }
    cout<<dsu.num_components()<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}