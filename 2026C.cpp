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
    string s;
    cin>>s;

    int l = 0, r = n-1;
    int ans = 0;
    while(l<=r){
        while(s[r] == '0' && r>l){ 
            ans += r+1;
            r--;
            if(l > 0){
                l--;
                ans -= l+1;
            }
        }
        ans += l+1;
        l++;
        r--;
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