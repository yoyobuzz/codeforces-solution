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

int dfs(int u, int p, vector<unordered_set<int>> &adj, vi &vis){
    vis[u] = 1;
    for(auto v:adj[u]){
        if(vis[v] && v != p) return 1;
        else if(vis[v] && v == p) continue;
        else if(dfs(v, u, adj, vis) == 1) return 1;
    }
    return 0;
}

void solve(){

    int n;
    cin>>n;
    vector<unordered_set<int>> adj(n);
    for(int i=0; i<n; i++){
        int v;
        cin>>v;
        v--;
        adj[i].insert(v);
        adj[v].insert(i);
    }
    vector<int> vis(n, 0);
    int comp = 0, cyc = 0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            comp++;
            cyc += dfs(i, -1, adj, vis);
        }
    }
    cout<<cyc + (comp-cyc > 0) <<" "<<comp<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}