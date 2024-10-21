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
    vi a(n), b(n-1);
    f(i,0,n-1){
        cin>>b[i];
    }
    f(i,0,n){
        if(i==0)
            a[i]=b[i];
        else if(i==n-1)
            a[i]=b[i-1];
        else
            a[i]=b[i-1]|b[i];
    }
    f(i,0,n-1){
        if(b[i]!=(a[i]&a[i+1])){
            cout<<-1<<nl;
            // cout<<b[i]<<(a[i]&a[i+1])<<nl;
            return;
        }
    }
    f(i,0,n){
        cout<<a[i]<<" ";
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