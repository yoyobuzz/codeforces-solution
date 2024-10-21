#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define test int ttttt; cin >> ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

void solve(){

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int >> > adj(n+1);
    vector<vi> ed(m, vi(3));

    for(int i=0; i<m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        ed[i] = {u, v, w}; 
    }
    vi sl(n+1);

    for(int i=0; i<n; i++){
        cin >> sl[i+1];
    }
    
    for(int i=0; i<m; i++){

        int u = ed[i][0], v = ed[i][1], w = ed[i][2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});

        // dist[u][v] = min(w * sl[u], dist[u][v]);
        // dist[v][u] = min(w * sl[v], dist[v][u]);
    }


    vector<vi> dist(n+1, vi(1001, 1e18));

    // for(int i=1; i<=1000; i++){
    //     dist[1][i] = 0;
    // }
    dist[1][sl[1]] = 0;
    set<pair<int, pair<int, int>>> st;
    st.insert({0, {1, sl[1]}});

    while(!st.empty()){
        auto [d, temp] = *st.begin();
        auto [u, s] = temp;
        st.erase(st.begin());
        if(dist[u][s] < d) continue;
        s = min(sl[u], s);
        for(auto [v, w]:adj[u]){
            if(dist[v][s] > d + w * s){
                dist[v][s] = d + w * s;
                st.insert({d + w * s, {v, s}});
            }
        }
    }

    int ans = 1e18;
    for(int i=1; i<=1000; i++){
        ans = min(ans, dist[n][i]);
    }
    cout<<ans<<nl;


}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}