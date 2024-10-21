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

    string s, t;
    cin>>s>>t;
    int n = s.size(), m = t.size();
    int ans = n + m;
    for(int i = 0; i < min(n, m); i++){
        if(s[i] == t[i]){
            if(i==0) continue;
            ans--;
        }else{
            break;
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