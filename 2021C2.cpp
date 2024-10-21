#include <bits/stdc++.h>
using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define nl "\n"
typedef vector<int> vi;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vi a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Preprocess next occurrence of each element in `a`
    vector<int> next(n + 1, -1);
    unordered_map<int, int> pos;  // stores the most recent position of element in `a`
    
    for (int i = n - 1; i >= 0; i--) {
        pos[a[i]] = i;  // update the most recent occurrence of a[i]
        if (i + 1 < n) next[i] = pos[a[i+1]];
    }

    // Function to check if `b` is a subsequence of `a`
    auto is_subsequence = [&](vi &b) -> bool {
        int j = 0;
        for (int i = 0; i < m; i++) {
            if (j < n && a[j] == b[i]) j++;
            if (j == n) break;  // Found full sequence `a` in `b`
        }
        return j == n;  // Return true if we found full subsequence
    };

    // Initial check
    if (is_subsequence(b)) {
        cout << "YA" << nl;
    } else {
        cout << "TIDAK" << nl;
    }

    // Handle queries
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        b[u - 1] = v;  // Update b[u] to value v

        if (is_subsequence(b)) {
            cout << "YA" << nl;
        } else {
            cout << "TIDAK" << nl;
        }
    }
}

signed main() {
    fast_io
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
