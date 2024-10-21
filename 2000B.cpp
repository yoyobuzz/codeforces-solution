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
    // vi a(n);
    map<int, int> mp;
    int x;
    cin>>x;
    mp[x]=1;
    bool flag = true;
    for(int i=1; i<n; i++){
        cin>>x;
        if(mp.find(x-1)==mp.end() && mp.find(x+1)==mp.end()){
            flag = false;
        }
        mp[x]=1;
    }
    if(!flag)
        cout<<"NO"<<nl;
    else
        cout<<"YES"<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}