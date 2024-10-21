#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define nl "\n"
#define all(a) (a).begin(), (a).end()

struct DSU {
    vector<int> parent, rank;
    
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int x) {
        if(parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }
    
    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if(rootX != rootY) {
            if(rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if(rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
            return true;
        }
        return false;
    }
};

struct Edge {
    int u, v, weight;
    bool in_mst;
};

// Binary search to find the insertion point
int ceilSearch(vector<Edge>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid].weight == x)
            return mid;
        else if (x < arr[mid].weight)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

signed main() {
    fast_io
    
    int n, m, q;
    cin >> n >> m >> q;
    
    vector<Edge> edges(m);
    
    for(int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
        edges[i].u--;
        edges[i].v--;
        edges[i].in_mst = false;
    }
    
    // Sort edges by weight
    sort(all(edges), [](Edge &a, Edge &b) {
        return a.weight < b.weight;
    });
    
    DSU dsu(n);
    int mst_edge_count = 0;
    
    // List to store DSU states at each stage
    vector<DSU> dsu_list;
    dsu_list.push_back(dsu);  // Initial DSU state before adding any edges
    
    // Kruskal's algorithm to build the MST and store DSU states
    for (int i = 0; i < m; i++) {
        if (dsu.unite(edges[i].u, edges[i].v)) {
            mst_edge_count++;
            edges[i].in_mst = true;
            dsu_list.push_back(dsu);  // Store the DSU state after adding each MST edge
            if (mst_edge_count == n - 1) break;  // Stop when MST is complete
        }
    }
    
    // Process each query
    while (q--) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        
        // Find the appropriate DSU state by searching for the new edge's weight
        int idx = ceilSearch(edges, w);
        
        // Use the DSU state stored just before this position
        if (idx > mst_edge_count) {
            idx = mst_edge_count;
        }
        
        // Use the DSU state at index `idx`
        DSU temp_dsu = dsu_list[idx];
        
        // Check if the new edge connects two different components
        if (temp_dsu.unite(u, v)) {
            cout << "Yes" << nl;
        } else {
            cout << "No" << nl;
        }
    }

    return 0;
}
