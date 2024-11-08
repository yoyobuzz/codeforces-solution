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

bool good(double x, vi &a, vi &b){
    double l = a[0] - max(x - b[0], 0.0), r = a[0] + max(x - b[0], 0.0);
    for(int i=0; i<a.size(); i++){
        l = max(l, a[i] - max(x - b[i], 0.0));
        r = min(r, a[i] + max(x - b[i], 0.0));
    }
    return l<=r;
}

double print(double x, vi &a, vi &b){
    double l = a[0] - max(x - b[0], 0.0), r = a[0] + max(x - b[0], 0.0);
    for(int i=0; i<a.size(); i++){
        l = max(l, a[i] - max(x - b[i], 0.0));
        r = min(r, a[i] + max(x - b[i], 0.0));
    }
    return r;
}

void solve(){

    int n;
    cin>>n;
    vi a(n), b(n);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;

    double l = 0, r = 1e18;
    while(r-l>1e-6){
        double mid = (l+r)/2;
        if(good(mid, a, b))
            r = mid;
        else l = mid;
    }
    cout<<setprecision(8)<<print(r, a, b)<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}