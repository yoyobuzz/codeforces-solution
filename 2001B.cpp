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
    if(!(n&1)){
        cout<<-1<<nl;
        return;
    }
    int l = 1, r = n;
    for(int i=0; i<n; i++){
        if(i&1){
            cout<<r<<" ";
            r--;
        }
        else{
            cout<<l<<" ";
            l++;
        }
    }
    cout<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}