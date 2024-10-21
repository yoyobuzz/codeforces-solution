#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define nl "\n"

struct Edge {
    int u, v, w;
    bool operator<(const Edge &other) const {
        return w < other.w; // Sort edges by weight
    }
};

const int INF = 1e18;

// Disjoint Set Union (DSU) / Union-Find
struct DSU {
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n+1);
        rank.resize(n+1, 0);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

void solve() {
    int n, m, p;
    cin >> n >> m >> p;

    vector<int> net(p); // Houses that need internet
    for (int i = 0; i < p; i++) {
        cin >> net[i];
    }

    vector<Edge> edges(m); // All the edges in the graph
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }

    // Step 1: Build the Minimum Spanning Tree (MST) using Kruskal's algorithm
    sort(edges.begin(), edges.end()); // Sort edges by weight
    DSU dsu(n);
    vector<vector<pair<int, int>>> mst(n + 1); // MST as adjacency list (node -> {neighbor, weight})
    
    for (const auto &edge : edges) {
        if (dsu.find(edge.u) != dsu.find(edge.v)) {
            dsu.unite(edge.u, edge.v);
            mst[edge.u].push_back({edge.v, edge.w});
            mst[edge.v].push_back({edge.u, edge.w});
        }
    }

    // Step 2: Precompute the maximum latency for each pair of houses in the MST
    // We will use DFS to compute the maximum edge on the path between any two nodes
    vector<vector<int>> max_latency(n + 1, vector<int>(n + 1, -1)); // max_latency[u][v]: max edge in MST path from u to v

    function<void(int, int, int)> dfs = [&](int u, int parent, int current_max) {
        for (auto &[v, w] : mst[u]) {
            if (v != parent) {
                max_latency[u][v] = max_latency[v][u] = max(current_max, w);
                dfs(v, u, max_latency[u][v]);
            }
        }
    };

    for (int i = 1; i <= n; i++) {
        dfs(i, -1, 0); // DFS from each node to compute max latencies
    }

    // Step 3: Compute the minimum total latency for each k = 1 to n
    for (int k = 1; k <= n; k++) {
        int min_total_latency = INF;

        // Brute force through all combinations of k servers
        vector<int> server_positions(k); 
        iota(server_positions.begin(), server_positions.end(), 1); // [1, 2, ..., n]

        do {
            int total_latency = 0;

            // For each house that needs internet, compute the maximum latency to the nearest server
            for (int i = 0; i < p; i++) {
                int si = net[i];
                int best_latency = INF;

                for (int j = 0; j < k; j++) {
                    int server = server_positions[j];
                    best_latency = min(best_latency, max_latency[si][server]);
                }

                total_latency += best_latency;
            }

            min_total_latency = min(min_total_latency, total_latency);

        } while (next_permutation(server_positions.begin(), server_positions.begin() + k));

        cout << min_total_latency << " ";
    }

    cout << nl;
}

signed main() {
    fast_io;
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
