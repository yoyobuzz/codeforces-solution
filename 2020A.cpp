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

void solve(){

    int n, k;
    cin>>n>>k;

    if(k==1 || k>n){
        cout<<n<<nl;
        return;
    } 
    int ans = 0;
    while(n>0){
        if(n%k!=0){
            ans+=n%k;
        }
        n /= k;
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