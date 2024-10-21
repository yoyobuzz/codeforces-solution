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
    for(auto &i:a){
        cin>>i;
    }
    vi div;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            if(n/i==i){
                div.emplace_back(i);
            }else{
                div.emplace_back(i);
                div.emplace_back(n/i);
            }
        }
    }
    sort(all(div));
    int ans = 0;
    for(auto d:div){
        int gcd = 0;
        for(int i=0; i<n && i+d<n; i++){
            gcd = __gcd(gcd, abs(a[i] - a[i+d]));
        }
        if(gcd == 1) continue;
        ans++;
    }
    cout<<ans<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}