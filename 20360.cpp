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
    for(auto &i:a) cin>>i;
    for(int i=1; i<n; i++){
        if(abs(a[i-1]-a[i]) == 7 || abs(a[i-1]-a[i]) == 5){

        }else{
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}