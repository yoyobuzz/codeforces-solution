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

    int n,m;
    string s;
    cin>>n>>m>>s;
    vi a(7,0);
    f(i,0,n){
        a[s[i]-'A']++;
    }
    int ans = 0;
    f(i,0,7){
        if(a[i]<m){
            ans+=(m-a[i]);
        }
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