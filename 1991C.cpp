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
    f(i,0,n){
        cin>>a[i];
    }
    // sort(all(a));
    int m = 40;
    vi turn(m, 0);


    for(int i=30; i>=0; i--){
        turn[i]=(1<<i); /// see this
        
        for(int j=0; j<n; j++){
            a[j]=abs(a[j]-turn[i]);
        }
        
    }
    // for(int i=0; i<m; i++){
        // int mx = *min_element(all(a)) + *max_element(all(a));
        // turn[i]=mx/2;
        // for(int j=0; j<n; j++){
        //     a[j]=abs(a[j]-turn[i]);
        // }
    // }
    // for(int j=0; j<n; j++){
    //     if(a[j]!=0){
    //         cout<<-1<<nl;
    //         return;
    //     }
    // }
    // cout<<40<<nl;

    for(auto i:a){
        cout<<i<<" ";
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