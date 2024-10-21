#include <bits/stdc++.h>

using namespace std;

#define fast_io                   \
    std::ios::sync_with_stdio(0); \
    cin.tie(0);
#define int long long
#define test        \
    int ttttt;      \
    cin >> ttttt;   \
    while (ttttt--) \
        solve();
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for (int i = p; i < n; i++)

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

ll dfs(vector<ll> adj[], ll src, ll dest, ll n)
{
    vector<ll> dist(n + 1, -1);
    dist[src] = 0;
    queue<ll> q;
    q.push(src);
    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        for (ll v : adj[u])
        {
            if (dist[v] == -1)
            {
                dist[v] = dist[u] + abs(v - u);
                q.push(v);
            }
        }
    }
    return dist[dest];
}

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> adj[n + 5];
    unordered_map<char, ll> mp;
    mp['B'] = n + 1;
    mp['G'] = n + 2;
    mp['R'] = n + 3;
    mp['Y'] = n + 4;
    for (ll i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        adj[i].push_back(mp[s[0]]);
        adj[i].push_back(mp[s[1]]);
        adj[mp[s[0]]].push_back(i);
        adj[mp[s[1]]].push_back(i);
    }
    vector<ll> adj2[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        for (ll v : adj[i])
        {
            for (ll u : adj[v])
            {
                if (u != i)
                {
                    adj2[i].push_back(u);
                }
            }
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        adj[i] = adj2[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
        adj[i].erase(unique(adj[i].begin(), adj[i].end()), adj[i].end());
        // cout<<"Adjacency list of "<<i<<": ";
        // for(ll v : adj[i]){
        //     cout<<v<<" ";
        // }
    }
    for (ll i = 0; i < q; i++)
    {
        ll src, dest;
        cin >> src >> dest;
        // cout<<"Case #"<<i+1<<": ";
        // cout<<"Source: "<<src<<" Destination: "<<dest<<endl;
        ll ans = dfs(adj, src, dest, n);
        cout << ans << endl;
    }
}

// void solve() {
//     int n, q;
//     cin >> n >> q;
//     vector<string> a(n);
//     unordered_map<char, vector<int>> m;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         m[a[i][0]].push_back(i);
//         m[a[i][1]].push_back(i);
//     }

//     vector<vector<pair<int, int>>> adj(n);
//     for (int i = 0; i < n; i++) {
//         for (int x : m[a[i][0]]) {
//             if (x != i) adj[i].emplace_back(x, abs(x-i));
//         }
//         for (int x : m[a[i][1]]) {
//             if (x != i) adj[i].emplace_back(x, abs(x-i));
//         }
//     }

//     vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
//     while (q--) {
//         int x, y;
//         cin >> x >> y;
//         x--; y--;
//         if(x>y) swap(x, y);
//         if(dist[x][x] == 0) {
//             if (dist[x][y] == INT_MAX) {
//                 cout<<-1<< nl;
//             } else {
//                 cout<<dist[x][y]<<nl;
//             }
//             continue;
//         }
//         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
//         dist[x][x] = 0;
//         pq.emplace(0, x);
//         while (!pq.empty()) {
//             int curr = pq.top().first;
//             int u = pq.top().second;
//             pq.pop();

//             if (curr > dist[u][x]) continue;

//             for (auto& [v, w] : adj[u]) {
//                 if (dist[x][u] + w < dist[x][v]) {
//                     dist[x][v] = dist[x][u] + w;
//                     pq.emplace(dist[x][v], v);
//                 }
//             }
//         }
//         if (dist[x][y] == INT_MAX) {
//             cout<<-1<< nl;
//         } else {
//             cout<<dist[x][y]<<nl;
//         }
//     }
// }

// void solve(){
//     int n, q;
//     cin>>n>>q;
//     vector<string> a(n);
//     unordered_map<char, vector<int>> m;
//     f(i, 0, n){
//         cin>>a[i];
//         m[a[i][0]].push_back(i);
//         m[a[i][1]].push_back(i);
//     }
//     vector<vector<int>> adj(n);
//     for(int i=0; i<n; i++){
//         adj[i].resize(m[a[i][0]].size()+m[a[i][1]].size());
//         merge(all(m[a[i][0]]), all(m[a[i][1]]), adj[i].begin());
//     }
//     while(q--){
//         int x, y;
//         cin>>x>>y;
//         x--; y--;
//         if(x>y)
//             swap(x, y);
//         vector<int> dist(n, -1);
//         queue<int> q;
//         q.push(x);
//         dist[x] = 0;
//         while(!q.empty()){
//             int u = q.front();
//             q.pop();
//             for(int v: adj[u]){
//                 if(dist[v]==-1){
//                     dist[v] = abs(v-u) + dist[u];
//                     q.push(v);
//                 }
//             }
//         }
//         cout<<dist[y]<<nl;
//     }
// }

signed main()
{
    fast_io

        test

        // cout<<"\n";
        return 0;
}