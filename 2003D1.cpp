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

signed main()
{
    // fast_io
    
    
    
    //cout<<"\n";
    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// #define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// #define int long long
// #define test int ttttt; cin>>ttttt; while(ttttt--) solve();
// #define nl "\n"
// typedef vector<int> vi;
// typedef long long ll;
// #define all(a) (a).begin(), (a).end()
// #define f(i, p, n) for(int i=p; i<n; i++)

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> a(n);
//     vector<pair<int, int>> mex(n);
//     int mx = 0, mn = LLONG_MAX;
//     for(int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         a[i].resize(x);
//         for(int j = 0; j < x; j++) {
//             cin >> a[i][j];
//         }
//         sort(a[i].begin(), a[i].end());
//         int mexx = 0, second_mexx = -1;
//         for(int j = 0; j < x; j++) {
//             if(a[i][j] == mexx) {
//                 mexx++;
//             } else if(a[i][j] > mexx) {
//                 if(second_mexx == -1) {
//                     second_mexx = mexx + 1;
//                 }
//                 if(a[i][j] == second_mexx) {
//                     second_mexx++;
//                 }
//             }
//         }  
//         if(second_mexx == -1) {
//             second_mexx = mexx + 1;
//         }
//         // cout<<mexx<<" "<<second_mexx<<nl;
//         mex[i] = {mexx, second_mexx};
//         mx = max(second_mexx, mx);
//         mn = min(mexx, mn);
//     }
//     // cout<<mx<<" "<<mn<<nl;
//     // if(m<mn){
//     //     cout<<m*mn+mn<<nl;
//     if(m<=mx){
//         cout<<m*mx+mx<<nl;
//     }else{
//         int ans = mx*mx+mx;
//         if(m&1){
//             ans+= (m*((m+1)/2));
//         }else{
//             ans+= ((m+1)*((m)/2));
//         }
//         if(mx&1){
//             ans-= (mx*((mx+1)/2));
//         }else{
//             ans-= ((mx+1)*((mx)/2));
//         }
//         cout<<ans<<nl;
//     }
// }


// signed main()
// {
//     fast_io
    
//     test
    
//     //cout<<"\n";
//     return 0;
// }