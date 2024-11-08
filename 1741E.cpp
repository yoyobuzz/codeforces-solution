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

vector<int> dp;

void solve(){

    int n;
    cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    if(n == 1){
        cout<<"NO"<<nl;
        return;
    } 
    dp.assign(n+1, 0);

    dp[0] = 1;
    for(int i=1; i<=n; i++){
        if(i-a[i-1]-1 >= 0 && dp[i-a[i-1]-1] == 1){
            dp[i] = 1;
        }
        if(dp[i-1] == 1 && i+a[i-1] <= n){
            dp[i+a[i-1]] = 1;
        }
    }


    if(dp[n] == 1){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}