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

bool dfs(int u, vector<vi> &adj, map<int, int> &color){
    for(auto v:adj[u]){
        if(color.find(v) == color.end()){
            color[v] = (color[u]+1) % 2;
            if(!dfs(v, adj, color)) return false;
        }
        else if(color[v] == color[u]){
            return false;
        }
    }
    return true;
}

void solve(){

    int n;
    cin>>n;
    vector<vi> adj(n);
    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(auto i:adj){
        if(i.size()!=2){
            cout<<"NO"<<nl;
            return;
        }
    }
    map<int, int> color;
    for(int i=0; i<n; i++){
        if(color.find(i) == color.end() && !adj[i].empty()){
            color[i] = 1;
            if(!dfs(i, adj, color)){
                cout<<"NO"<<nl;
                return;
            }
        }
    }
    cout<<"YES"<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}