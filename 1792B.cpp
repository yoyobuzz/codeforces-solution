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

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0){
        cout<<1<<nl;
        return;
    }
    int ans=0;
    ans = a + 2 * min (b, c) + min (a, abs(b-c) + d);
    if(ans<a+b+c+d) ans++;
    cout<<ans<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}