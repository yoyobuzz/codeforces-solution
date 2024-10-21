#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// #define int long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

// int m[(int)1e9+1];

void solve(){

    int n;
    cin>>n;
    vector<pair<int, int>> v(n);
    int mn = 1e9, mx = 0;
    f(i, 0, n){
        cin>>v[i].first;
        cin>>v[i].second;
        mn = min(mn, v[i].first);
        mx = max(mx, v[i].second);
    }
    sort(all(v), [](pair<int, int> a, pair<int, int> b){
        if(a.second!=b.second) return a.second<b.second;
        else return a.first<b.first;
    });
    // unordered_map<int, bool> m;
    // memset(m, -1, sizeof(m));
    int last = -1;
    vector<bool> m(mx-mn+1, 0);
    for(auto x:v){
        for(int i=x.first; i<=x.second; i++){
            if(m[i-mn]==0){
                last = i;
            // if(m.find(i)==m.end()){
                m[i-mn] = 1;
                break;
            }
            if(i==x.first){
                i=last;
            }
            if(i==x.second){
                cout<<"No"<<nl;
                return;
            }
        }
    }
    cout<<"Yes"<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}