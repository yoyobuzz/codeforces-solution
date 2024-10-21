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

// int decToBinary(int n)
// {
//     // array to store binary number
//     int binaryNum[32];

//     // counter for binary array
//     int i = 0;
//     while (n > 0) {

//         // storing remainder in binary array
//         binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }

//     return i;
// }

void solve(){

    int n;
    cin>>n;
    vi a(n);
    f(i, 0, n) cin>>a[i];
    int ans = 0;
    f(i, 1, n){
        if(a[i-1]>a[i]){
            // decToBinary(a[i-1]-a[i]);
            // ans = max(ans, decToBinary(a[i-1]-a[i]));
            int pw = (ll)log2(a[i-1]-a[i]+1);
            if(pow(2, pw) != a[i-1]-a[i]+1) pw++;
            ans = max(ans, pw);
            a[i] = a[i-1];
        }
    }
    // for(auto x: a) cout<<x<<" ";
    // cout<<nl;
    cout<<ans<<nl;
    // cout<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}