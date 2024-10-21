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

vi mp;

void solve(){

    int n;
    cin>>n;
    int ans = 1;
    while(n>0){
        ans *= mp[n%10];
        n /= 10;
    }
    cout<<ans<<nl;

}

signed main()
{
    fast_io
    
    mp = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

    test
    
    //cout<<"\n";
    return 0;
}