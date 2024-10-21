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

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n;
    cin>>n;
    vi a(n), b(n);
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    int xs, ys, xf, yf;
    cin>>xs>>ys>>xf>>yf;
    int dist = (binpow((xf-xs), 2) + binpow((yf-ys), 2));
    for(int i = 0; i<n; i++){
        // double dist1 = sqrt(pow((a[i]-xs), 2) + pow((b[i]-ys), 2));
        int dist2 = (binpow((a[i]-xf), 2) + binpow((b[i]-yf), 2));
        if(dist2<=dist){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}