// UNSOLVED
#include <bits/stdc++.h>
using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
typedef vector<int> vi;

signed main() {
    fast_io

    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> dp(m + 1, -1);  // Store the maximum checks passed with p points spent
    dp[0] = 0;  // Initially, with 0 points spent, 0 checks passed

    int total_points = 0;  // To keep track of total points spent

    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) total_points++;  // Increase total points for each acquisition

        // Update dp in reverse to avoid overwriting states
        for (int p = m; p >= 0; --p) {
            if (dp[p] == -1) continue;  // Skip invalid states

            int q = total_points - p;  // Calculate remaining points spent on intelligence

            if (a[i] == 0) {
                // Spend point on strength
                if (p + 1 <= m) 
                    dp[p + 1] = max(dp[p + 1], dp[p]);
                // Spend point on intelligence
                if (q + 1 <= m) 
                    dp[p] = max(dp[p], dp[p]);
            } 
            else if (a[i] < 0) {
                int required = abs(a[i]);
                if (p >= required) 
                    dp[p] = max(dp[p], dp[p] + 1);  // Pass strength check
            } 
            else {
                int required = a[i];
                if (q >= required) 
                    dp[p] = max(dp[p], dp[p] + 1);  // Pass intelligence check
            }
        }
    }

    // Find the maximum number of checks passed
    int max_checks = 0;
    for (int p = 0; p <= m; ++p) {
        max_checks = max(max_checks, dp[p]);
    }

    cout << max_checks << "\n";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// #define int long long
// typedef vector<int> vi;

// signed main() {
//     fast_io

//     int n, m;
//     cin >> n >> m;
//     vi a(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }

//     vector<int> dp(m + 1, -1);
//     dp[0] = 0; 

//     vector<int> temp(m + 1, -1);

//     int points_used = 0; 

//     for (int i = 0; i < n; ++i) {
//         fill(temp.begin(), temp.end(), -1); 

//         for (int p = 0; p <= m; ++p) {
//             if (dp[p] == -1) continue; 

//             int q = points_used - p;

//             if (a[i] == 0) {
//                 if (p + 1 <= m) 
//                     temp[p + 1] = max(temp[p + 1], dp[p]);
//                 if (q + 1 <= m) 
//                     temp[p] = max(temp[p], dp[p]);
//             } 
//             else if (a[i] < 0) {
//                 int required = abs(a[i]);
//                 if (p >= required) 
//                     temp[p] = max(temp[p], dp[p] + 1); 
//                 else 
//                     temp[p] = max(temp[p], dp[p]);
//             } 
//             else {
//                 int required = a[i];
//                 if (q >= required) 
//                     temp[p] = max(temp[p], dp[p] + 1); 
//                 else 
//                     temp[p] = max(temp[p], dp[p]);  
//             }
//         }

//         swap(dp, temp);

//         if (a[i] == 0) points_used++;
//     }

//     int max_checks = 0;
//     for (int p = 0; p <= m; ++p) {
//         max_checks = max(max_checks, dp[p]);
//     }

//     cout << max_checks << "\n";
//     return 0;
// }

// // #include <bits/stdc++.h>
// // using namespace std;

// // #define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// // #define int long long
// // typedef vector<int> vi;

// // signed main() {
// //     fast_io

// //     int n, m;
// //     cin >> n >> m;
// //     vi a(n);
// //     for (int i = 0; i < n; ++i) {
// //         cin >> a[i];
// //     }

// //     vector<vector<int>> dp(m + 1, vector<int>(m + 1, -1));
// //     vector<vector<int>> temp(m + 1, vector<int>(m + 1, -1));

// //     dp[0][0] = 0;
// //     for (int i = 0; i < n; ++i) {
// //         for (int p = 0; p <= m; ++p) {
// //             for (int q = 0; q <= m; ++q) {
// //                 temp[p][q] = -1;
// //             }
// //         }
// //         for (int p = 0; p <= m; ++p) {
// //             for (int q = 0; q <= m; ++q) {
// //                 if (dp[p][q] == -1) continue; 
// //                 if (a[i] == 0) {
// //                     if (p + 1 <= m) 
// //                         temp[p + 1][q] = max(temp[p + 1][q], dp[p][q]);
// //                     if (q + 1 <= m) 
// //                         temp[p][q + 1] = max(temp[p][q + 1], dp[p][q]);
// //                 } 
// //                 else if (a[i] < 0) {
// //                     int required = abs(a[i]);
// //                     if (p >= required) 
// //                         temp[p][q] = max(temp[p][q], dp[p][q] + 1);
// //                     else 
// //                         temp[p][q] = max(temp[p][q], dp[p][q]);
// //                 } 
// //                 else {
// //                     int required = a[i];
// //                     if (q >= required) 
// //                         temp[p][q] = max(temp[p][q], dp[p][q] + 1);
// //                     else 
// //                         temp[p][q] = max(temp[p][q], dp[p][q]);
// //                 }
// //             }
// //         }

// //         swap(dp, temp);
// //     }

// //     int max_checks = 0;
// //     for (int p = 0; p <= m; ++p) {
// //         for (int q = 0; q <= m; ++q) {
// //             max_checks = max(max_checks, dp[p][q]);
// //         }
// //     }

// //     cout << max_checks << "\n";
// //     return 0;
// // }

// // // #include <bits/stdc++.h>

// // // using namespace std;

// // // #define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// // // #define int long long
// // // #define test int ttttt; cin>>ttttt; while(ttttt--) solve();
// // // #define nl "\n"
// // // typedef vector<int> vi;
// // // typedef long long ll;
// // // #define all(a) (a).begin(), (a).end()
// // // #define f(i, p, n) for(int i=p; i<n; i++)

// // // vector<vector<vector<int>>> dp; 

// // // int solve(int i, int p, int q, vi &a){
// // //     if(i==a.size()) return 0;
// // //     if (dp[i][p][q] != -1) return dp[i][p][q];
// // //     if(a[i] == 0) return max(solve(i+1, p+1, q, a), solve(i+1, p, q+1, a));
// // //     else if(a[i]<0){
// // //         if(p>=abs(a[i])) return 1 + solve(i+1, p, q, a);
// // //         else return solve(i+1, p, q, a);
// // //     }else{
// // //         if(q>=abs(a[i])) return 1 + solve(i+1, p, q, a);
// // //         else return solve(i+1, p, q, a);
// // //     }
// // // }


// // // signed main()
// // // {
// // //     fast_io
    
// // //     int n, m;
// // //     cin>>n>>m;
// // //     vi a(n);
// // //     vi checks;
// // //     for(int i=0; i<n; i++){
// // //         cin>>a[i];
// // //         // if(a[i] != 0) checks.push_back(i);
// // //     }
// // //     dp.assign(n, vector<vector<int>>(m + 1, vector<int>(m + 1, -1)));
// // //     cout<<solve(0, 0, 0, a);
    
// // //     //cout<<"\n";
// // //     return 0;
// // // }