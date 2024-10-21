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
    
    int n, x;
    cin>>n>>x;
    vi a(n);
    map<int, int> mp;
    for(int i=0; i<n; i++){ 
        cin>>a[i];
        mp[a[i]]++;
    }
    int mex = 0;
    int i = 0;
    while(1){
        if(mp[i]>=1){
            mp[i]--;
            mp[i+x] += mp[i];
            mex = i+1;
        }else{
            break;
        }
        i++;
    }
    cout<<mex<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}