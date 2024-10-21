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

// void solve(){

//     int n,l,r;
//     cin>>n>>l>>r;
//     vi a(n);
//     f(i,0,n){
//         cin>>a[i];
//     }
//     int ans = 0;
//     int temp = 0;
//     f(i,0,n){
//         if(temp+a[i]<=r && temp+a[i]>=l){
//             ans++;
//             continue;
//         }else{
//             temp=0;
//         }
//         if(a[i]<=r && a[i]>=l){
//             ans++;
//         }else{
//             temp+=a[i];
//         }
//     }
//     cout<<ans<<nl;
// }

// signed main()
// {
//     fast_io
    
//     test
    
//     //cout<<"\n";
//     return 0;
// }