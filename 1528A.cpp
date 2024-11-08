// UNSOLVED

#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

int dfs(int u, int p, int mx, vector<pair<int, int>> lr, vector<vi> &adj){
    int ans = 0;
    for(auto v:adj[u]){
        if(v != p){
            if(mx == 0){
                ans += abs(lr[u].first - lr[v].second);
            }else{
                ans += abs(lr[u].second - lr[v].first);
            }
            ans += dfs(v, u, !mx, lr, adj);
        }
    }
    return ans;
}

void solve(){

    int n;
    cin>>n;
    vector<vi> adj(n);
    vector<pair<int, int>> lr(n);
    for(auto &[u, v]:lr) cin>>u>>v;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<max(dfs(0, -1, 0, lr, adj), dfs(0, -1, 1, lr, adj))<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}