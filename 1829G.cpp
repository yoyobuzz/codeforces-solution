#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int unsigned long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

vector<int> lvl;
vector<int> dp;

int helper(int x){
    if(x == 1) return dp[x] = 1;
    if(dp[x] != -1) return dp[x];
    int l = lower_bound(all(lvl), x) - lvl.begin();
    int a = lvl[l-1] - (lvl[l] - x), b = lvl[l-1] - (lvl[l] - x) + 1, c = lvl[l-2] - (lvl[l] - x) + 1;
    dp[x] = x*x;
    if(a != 0 && l-1 == lower_bound(all(lvl), a) - lvl.begin()){
        dp[x] += helper(a);
    }
    if(l-1 == lower_bound(all(lvl), b) - lvl.begin()){
        dp[x] += helper(b);
    }
    if(l-2 == lower_bound(all(lvl), c) - lvl.begin()){
        dp[x] -= helper(c);
    }
    return dp[x];
}


void solve(){

    int n;
    cin>>n;
    // cout<<lower_bound(all(lvl), n) - lvl.begin()<<nl;
    cout<<helper(n)<<nl;
    // cout<<dp[n]<<nl;
}

signed main()
{
    fast_io
    
    lvl.resize(2024, 0);
    int sum = 0;
    for(int i=1; i<2024; i++){
        sum += i;
        lvl[i] = sum;
    }
    dp.resize(1e6+1, -1);
    dp[0] = 0;
    // cout<<dp[1]<<nl;
    test
    
    //cout<<"\n";
    return 0;
}