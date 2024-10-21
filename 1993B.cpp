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
    vi arr(n);
    int even = 0;
    int mx_e = 0, mx_o = 0;
    f(i, 0, n){ 
        cin>>arr[i];
        if(arr[i]%2==0) {
            even++;
            mx_e = max(mx_e, arr[i]);
        }else{
            mx_o = max(mx_o, arr[i]);
        }
    }
    if(even==n || even==0){
        cout<<0<<nl;
        return;
    }
    sort(all(arr));
    int counter = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0 && arr[i]<mx_o){
            mx_o = mx_o + arr[i];
        }else if(arr[i]%2==0 && arr[i]>mx_o){
            counter++;
            mx_o = mx_o + 2*mx_e;
            i--;
        }
    }
    cout<<even+counter<<nl;
    // int justsmalleven = 0;
    // for(int i=0; i<n; i++){
    //     if(arr[i]%2==0 && arr[i]<mx_o){
    //         justsmalleven = max(justsmalleven, arr[i]);
    //     }
    // }
    
    // else{
    //     if(mx_e<mx_o) cout<<even<<nl;
    //     else if()
    //     else cout<<even+1<<nl;
    // }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}