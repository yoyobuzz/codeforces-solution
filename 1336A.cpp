#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

int dfs(int u, int p, vector<vi> &adj, vector<pair<int, int>> &szd){
    szd[u].first = 1;
    for(auto v:adj[u]){
        if(v!=p){
            szd[v].second = szd[u].second+1;
            szd[u].first += dfs(v, u, adj, szd); 
        }
    }
    return szd[u].first;
}
// void dfs1(int u, int p, vector<vi> &adj, vi &dist, vi &happ){
//     for(auto v:adj[u]){
//         if(v!=p){
//             dist[v] = dist[u] + happ[u];
//             dfs1(v, u, adj, dist, happ); 
//         }
//     }
// }

void solve(){

    int n, k;
    cin>>n>>k;
    vector<vi> adj(n);
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<pair<int, int>> szd(n, {0, 0});
    szd[0] = {1, 1};
    dfs(0, -1, adj, szd);

    sort(all(szd), [](auto &a, auto &b){
        return a.first-a.second>b.first-b.second;
    });

    int ans = 0;
    for(int i=0; i<n-k; i++){
        ans += szd[i].first - szd[i].second;
    }
    cout<<ans<<nl;
    return;

    // vector<pair<int, pair<int, int>>> fin(n);
    // for(int i=0; i<n; i++){
    //     fin[i] = {i, szd[i]};
    // }
    // sort(all(fin), [](pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b){
    //     return (a.second.first != b.second.first) ? a.second.first > b.second.first : a.second.second < b.second.second;
    // });

    // vi hpp(n, 0);
    // for(int i=0; i<n; i++){
    //     if(i<n-k){
    //         hpp[fin[i].first] = 1;
    //     }else{
    //         break;
    //     }
    // }
    // int ans = 0;
    // vi dist(n, 0);
    // dfs1(0, -1, adj, dist, hpp);

    // for(int i=0; i<n; i++){
    //     if(i<n-k){
    //     }else{
    //         // cout<<fin[i].first+1<<" "<<dist[fin[i].first]<<nl;
    //         ans+=dist[fin[i].first];
    //     }
    // }
    // cout<<ans<<nl;
}

signed main()
{
    fast_io
    
    solve();
    
    //cout<<"\n";
    return 0;
}