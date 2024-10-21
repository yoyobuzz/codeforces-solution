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

int lcm(int a, int b) {
    return (a/__gcd(a, b))*b;
}


void solve(){

    int n, k;
    cin>>n>>k;
    vi a(n);
    f(i, 0, n) cin>>a[i];
    sort(all(a));
    int mx = *max_element(a.begin(), a.end());
    int t = mx;
    while (t<mx+2*k) {
        bool all_on = true;
        for (int i = 0; i < n; ++i) {
            if ((t - a[i]) % (2*k) >= k) {
                all_on = false;
                break;
            }else if((t - a[i]) % (2*k) == k){
                cout<<-1<<nl;
                return;
            }
        }
        if (all_on) {
            cout<<t<<nl;
            return;
        }
        t += 1;
    }
    // cout<<-1<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}