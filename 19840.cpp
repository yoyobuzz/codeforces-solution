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
    unordered_map<int,int> mp;
    f(i,0,n) {
        cin>>a[i];
        mp[a[i]]++;
    }
    if(a[n-1]==a[0]){
        cout<<"NO"<<nl;
        return;
    }
    cout<<"YES"<<nl;
    string ans;
    if(mp[a[0]]==1){
        f(i,0,n-1){
            ans+="R";
        }
        ans+="B";
    }else{
        ans="B";
        f(i,1,n){
            ans+="R";
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