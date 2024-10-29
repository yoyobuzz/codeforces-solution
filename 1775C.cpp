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
    // if(k>n){
    //     cout<<-1<<nl;
    //     return;
    // }else if(k==n){
    //     cout<<n<<nl;
    //     return;
    // }
    int ans = n;
    for(int i=0; i<=40; i++){
        if((ans>>i)&(1LL) == (k>>i)&(1LL)){
            // cout<<'-';
        }else if((ans>>i)&(1LL) == 0LL && (k>>i)&(1LL) == 1LL){
            cout<<-1<<nl;
            return;
        }else if((ans>>i)&(1LL) == 1LL && (k>>i)&(1LL) == 0LL){
            cout<<-1<<' ';
            ans += (1LL<<i);
        }
        // cout<<(ans&(1LL<<i))<<" ";
    }
    cout<<ans<<nl;

}

signed main()
{
    fast_io
    // cout<<((1024)&(1<<10))<<nl;
    test
    
    //cout<<"\n";
    return 0;
}