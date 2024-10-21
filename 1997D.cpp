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

// void dfs(int u, vector<vi> &adj, vi &a, vi &vis, int &maxi){
//     vis[u] = 1;
//     int temp = INT_MAX;
//     for(auto v: adj[u]){
//         if(!vis[v]){
//             dfs(v, adj, a, vis, maxi);
//         }
//         temp = min(temp, maxi);
//     }
//     if(u!=0)
//         maxi = max(a[u], temp);
// }

void solve(){

    int n;
    cin>>n;
    vi a(n);
    f(i, 0, n) cin>>a[i];

    vector<vi> adj (n, vi());
    f(i,0,n-1){
        int temp;
        cin>>temp;
        adj[temp-1].push_back(i+1);
    }
    // int ans = *max_element((a).begin() + 1, (a).end());

    vector<int> vis(n, 0);
    // int ans;
    // dfs(0, adj, a, vis, ans);
    // if(ans>0)
    //     cout<<a[0]+ans+1<<nl;
    // else
    //     cout<<a[0]<<nl;

    vector<pair<int, int>> dis(n+1, {INT_MAX, 0});
    for(int i=0; i<n; i++){
        dis[i].second = i;
    }
    queue<pair<int, int>> q;
    q.push({0, n});
    dis[n] = {-1, n};
    while(!q.empty()){
        auto [node, parent] = q.front();
        q.pop();
        if(vis[node]) continue;
        vis[node] = 1;
        dis[node].first = dis[parent].first + 1;
        for(auto child: adj[node]){
            q.push({child, node});
        }
    }
    dis.pop_back();
    sort(all(dis), greater<pair<int, int>>());
    int d = dis[0].first;

    for(int i=0; i<n; i++){
        if(dis[i].first == d || dis[i].first == 0){
            continue;
        }
        if(adj[dis[i].second].size() != 0){
            int temp = INT_MAX;
            for(auto child: adj[dis[i].second]){
                temp = min(temp, a[child]);
            }
            if(temp>=a[dis[i].second]){
                a[dis[i].second] = (a[dis[i].second]+temp)/2;
            }
            else{
                a[dis[i].second] = temp;
            }
        }
    }
    int temp = INT_MAX;
    for(auto i:adj[0]){
        temp = min(temp, a[i]);
    }
    cout<<a[0]+temp<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}