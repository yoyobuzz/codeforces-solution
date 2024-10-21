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

    int a, b;
    cin>>a>>b;
    if(a >= b){
        cout<<a<<nl;
    }else{
        if(a>=b-a){
            cout<<2*a-b<<nl;
        }else{
            cout<<0<<nl;
        }
    }


}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}