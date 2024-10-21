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

    int n, k;
    cin >> n >> k;
    vi a(n);
    for(auto &i:a) cin>>i;
    sort(all(a));

    int sum = 0, ans = 0, sub = 0;
    for(int i=0; i<n; i++){
        // if(a[i] > sub && sum + (n-i) * a[i] >= k){
        ans += min((n-i) * (a[i] - sub), k-sum);
            sum += min((n-i) * (a[i] - sub), k-sum);
        // }
        // cout<<min((n-i) * max(a[i] - sub, 0LL), k-sum)<<" "<<sum<<nl;
        sub = a[i];
        if(sum >= k){
            break;
        }
        ans++;
    }
    cout << ans << nl;
    // 1 2 3
    //    0 1 2
    //   -1
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}