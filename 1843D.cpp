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

int dfs(int u, vi &p, vi &size,vector<vi> &adj){
    if(u!=1 && adj[u].size() == 1)
        return size[u] = 1;
    int ans = 0;
    for(auto v:adj[u]){
        if(v != p[u]){
            p[v] = u;
            ans += dfs(v, p, size, adj);
        }
    }
    size[u] = ans;
    return ans;
}

void solve(){

    int n;
    cin>>n;
    vector<vi> adj(n+1);
    for(int i = 0; i < n-1; i++){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vi p(n+1, 0), size(n+1, 0);
    dfs(1, p, size, adj);
    if(size[1] == 0)  size[1] = 1;
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int u, v;
        cin>>u>>v;
        cout<<size[u]*size[v]<<nl;;
    }


}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}