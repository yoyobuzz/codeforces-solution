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

    int x, y, k;
    cin>>x>>y>>k;
    // if(k==1){
    //     cout<<x<<" "<<y<<nl;
    //     return;
    // }
    if(k%2==1){
        cout<<x<<" "<<y<<nl;
        k--;
    }
    for(int i=1; i<=k/2; i++){
        cout<<i+x<<" "<<i+y<<nl;
        cout<<-i+x<<" "<<-i+y<<nl;
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}