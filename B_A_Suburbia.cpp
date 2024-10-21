#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

int n;
vector<vector<int>> adj;
vector<int> dp, sizes, sums;

void dfss(int v, int p) {
    sizes[v] = 1;
    sums[v] = 0;
    for (auto u:adj[v]) {
        if (u!=p){
            dfss(u, v);
            sizes[v] += sizes[u];
            sums[v] += sums[u]+sizes[u];
        }
    }
}

void dfs(int v, int p) {
    if (p!=-1) {
        dp[v] = dp[p] + (n-2*sizes[v]);
    }
    for (auto u:adj[v]) {
        if (u!=p)
            dfs(u, v);
    }
}

signed main() {
    fast_io

    cin >> n;
    adj.resize(n);
    dp.resize(n);
    sizes.resize(n);
    sums.resize(n);

    for (int i=0; i<n-1; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfss(0, -1);
    dp[0] = sums[0];
    dfs(0, -1);

    for(auto i:dp)
        cout<<i<<nl;

    // cout << nl;
    return 0;
}
