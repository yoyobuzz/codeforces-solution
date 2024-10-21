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

    int n;
    cin>>n;
    vi a(n);
    f(i,0,n){
        cin>>a[i];
    }
    vi aa(n);
    int ans = 0, temp=0;
    f(i,0,n){
        aa[i]=a[i];
        if(i>0 && aa[i]<aa[i-1]){
            temp+=aa[i-1]-aa[i];
            aa[i]=aa[i-1];
        }
        ans = max(ans, aa[i]-a[i]);
    }
    cout<<ans+temp<<nl;
    // for(int i=n-1; i>=0; i--){
    //     aa[i]=a[i];
    //     if(i+a[i]<n){
    //         aa[i]+=aa[i+a[i]];
    //     }
    // }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}