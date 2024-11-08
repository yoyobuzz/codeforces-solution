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

const int mod = 1e9 + 7;

vector<int> pals;
vector<vi> dp;

int helper(int i, int w){
    if(w == 0) return 1;
    if(i == 0) return 0;
    if(dp[i][w] != -1) return dp[i][w]%mod;
    if(pals[i-1] <= w)
        return dp[i][w] = (helper(i-1, w)%mod + helper(i, w - pals[i-1])%mod)%mod;
    else
        return dp[i][w] = helper(i-1, w)%mod;
}

void solve(){

    int n;
    cin>>n;
    // auto it = lower_bound(all(pals), n) - pals.begin();
    // dp.assign(pals.size()+1, vi(n+1, -1));
    // cout<<helper(pals.size(), n)<<nl;
    cout<<dp[pals.size()][n]<<nl;
}


signed main()
{
    fast_io
    
    int n = 4e4+1;
    for(int i=1; i<=4e4+1; i++){
        string temp = to_string(i);
        int l = 0, r = temp.size()-1;
        bool flag = 1;
        while (l<r){
            if(temp[l++] != temp[r--]){
                flag = 0;
                break;
            }
        }
        if(flag)
            pals.emplace_back(i);
    }
    
    // cout<<pals.size()<<nl;

    dp.assign(pals.size()+1, vi(n+1, 0));
    for(int i=0; i<=pals.size(); i++){
        for(int w=0; w<=n; w++){
            if(w == 0) dp[i][w] = 1;
            else if(i == 0) dp[i][w] = 0;
            else if(pals[i-1] <= w) dp[i][w] = (dp[i-1][w] % mod + dp[i][w - pals[i-1]] % mod) % mod;
            else dp[i][w] = dp[i-1][w] % mod;
        }
    }
    test
    
    //cout<<"\n";
    return 0;
}