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

int helper(int i, int n, vi &a, vi &dp){
    if(i>=n) return 0;
    if(dp[i] != -1)
        return dp[i];
    int ans = INT_MAX;
    if(a[i] < n-i){
        ans = min(ans, helper(i+a[i]+1, n, a, dp));
    }
    ans = min(ans, 1 + helper(i+1, n, a, dp));

    return dp[i] = ans;
}

void solve(){

    int n;
    cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    vi dp(n+1, -1);
    cout<<helper(0, n, a, dp)<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}