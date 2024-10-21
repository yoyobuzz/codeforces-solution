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

void dfs(int u, vector<vi> &adj, vi &time, int &t){
    if(u==adj.size()-1){
        time[u] = t;
        return;
    }
    time[u] = t++;
    int temp = u+1;
    for(int v: adj[u]){
        temp = max(temp, v);
    }
    dfs(temp, adj, time, t);
}

void solve(){

    int n, m;
    cin>>n>>m;
    vector<vi> adj(n);
    for(int i = 0; i<n-1; i++){
        adj[i].push_back(i+1);
    }
    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
    }
    vi time(n, -1);
    for(int i = 0; i < n; i++){
        if(time)
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}