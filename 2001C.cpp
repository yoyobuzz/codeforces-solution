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

int doit(int i, int j){
    cout<<"? "<<i<<" "<<j<<nl;
    cout.flush();
    int x;
    cin>>x;
    return x;
}

void solve(){

    int n;
    cin>>n;
    vector<pair<int, int>> a;
    map<pair<int, int>, int> mp;
    // int q = 0;
    // while(a.size()<n-1 || q++<=15*n){
    
    // }
    for(int i=2; i<=n; i++){
        int x = doit(1, i);
        if(x==1){
            if(mp.find({1, i})!=mp.end() || mp.find({i, 1})!=mp.end()){
                continue;
            }
            a.push_back({1, i});
            mp[{1, i}] = 1;
        }
        else{
            int  y = doit(i, x);
            while(y!=i){
                x = y;
                y = doit(i, y);
            }
            if(mp.find({x, i})!=mp.end() || mp.find({i, x})!=mp.end()){
                continue;
            }
            a.push_back({i, x});
        }
        if(a.size()==n-1){
            break;
        }
    }
    cout<<"! ";
    for(auto x: a){
        cout<<x.first<<" "<<x.second<<" ";
    }
    cout<<nl;
    cout.flush();
}

signed main()
{
    // fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}