
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

int n;

int countSquares(int x){
    return (floor(sqrtl(x)) - ceil(sqrtl(1)) + 1);
}

bool good(int x){
    return x - floor(sqrtl(x)) >= n;
}

void solve(){

    // int k;
    // cin>>k;
    // bool flag = true;
    // int ans = k;
    // int last = 0;
    // while((int)sqrtl(ans)!=last){
    //     int ns = sqrtl(ans);
    //     ans+=(ns-last);
    //     last = ns;
    // }

    // cout<<ans<<endl;

    // int n;
    cin>>n;

    int l = 1, r = INT64_MAX;
    // while(!good(r)){
    //     l = r;
    //     r *= 2;
    // }

    while(l+1<r){
        int mid = l + (r-l)/2LL;
        if(good(mid))
            r = mid;
        else l = mid;
    }

    cout<<r<<nl;

    // int k = n;
    // vi a(k+1, 1);
    // for(int i=1; i<=k; i++){
    //     for(int j=i; j<=k; j+=i){
    //         a[j] = a[j] ^ 1;
    //     }
    //     int count = 0;
    //     for(int j=1; j<=k; j++){
    //         cout<<a[j]<<" ";
    //         count += a[j];
    //     }
    //     cout<<count<<nl;
    // }
    // cout<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}