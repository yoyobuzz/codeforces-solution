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

vector<vector<int>> calculateCoverage(int m, int n, int k) {
    vector<vector<int>> coverage(m, vector<int>(n, 0));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int topLeftX = max(0LL, i - k + 1);
            int topLeftY = max(0LL, j - k + 1);
            int bottomRightX = min(m - k, i);
            int bottomRightY = min(n - k, j);
            
            coverage[i][j] = (bottomRightX - topLeftX + 1) * (bottomRightY - topLeftY + 1);
        }
    }
    return coverage;
}

void solve(){

    int n, m, k;
    cin>>n>>m>>k;
    int w;
    cin>>w;
    vi a(w);
    f(i, 0, w){
        cin>>a[i];
    }
    sort(all(a), greater<int>());
    int ans = 0;
    vector<vector<int>> cov = calculateCoverage(m, n, k);
    vi b(n*m, 0);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            b[i*n+j] = cov[i][j];
        }
    }
    // int l=0;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         int x=0, y=0;
    //         if(i<=k){
    //             x+=i;
    //         }else if(i>=n-k+1){
    //             x+=n-i+1;
    //         }else{
    //             x+=k;
    //         }
    //         if(j<=k){
    //             y+=j;
    //         }else if(j>=m-k+1){
    //             y+=m-j+1;
    //         }else{
    //             y+=k;
    //         }
    //         b[l]=x*y;
    //         cout<<b[l]<<" ";
    //         l++;
    //     }
    // }
    // cout<<nl;
    sort(all(b), greater<int>());
    for(int i=0; i<w; i++){
        ans+=b[i]*a[i];
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