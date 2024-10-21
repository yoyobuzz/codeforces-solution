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

ll findlcm(vi arr, int n)
{
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /(__gcd(arr[i], ans)));

    return ans;
}

void solve()
{

    int n;
    cin >> n;
    vi a(n);
    f(i, 0, n) cin >> a[i];     

    int x = findlcm(a, n);

    int sum = 0;
    vi ans;

    f(i,0,n){
        sum += x / a[i];
        ans.push_back(x / a[i]);
    }

    if (sum >= x){
        cout << -1 << nl;
    }
    else{
        f(i,0,n) cout << ans[i] << " ";
        cout << nl;
    }

    return;
}

// void solve(){

// }

signed main()
{
    fast_io

    test

    // cout<<"\n";
    return 0;
}