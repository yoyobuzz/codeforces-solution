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
    vi ans(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(i>0){
            ans[i-1] = a[i];
        }
    }
    ans[n-1] = a[0];
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}