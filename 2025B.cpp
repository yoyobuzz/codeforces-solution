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

const int mod = 1e9 + 7;

long long power(long long a, long long b)
{
    long long result = 1;
    while (b) {
        if (b & 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}

signed main()
{
    fast_io
    
    int t;
    cin>>t;

    vi n(t), k(t);
    for(auto &i:n) cin>>i;
    for(auto &i:k) cin>>i;

    for(int i=0; i<t; i++){
        cout<<power(2, k[i])<<nl;
    }

    //cout<<"\n";
    return 0;
}