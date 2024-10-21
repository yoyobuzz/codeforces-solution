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
    for(auto &i:a) cin>>i;
    sort(all(a));
    int ans = 0;
    int l = 0, r = n-1;
    int x = 0;
    for(int i=n-1; i>=0; i--){
        while (x<a[i] && l<i){
            int temp = min(a[i] - x, a[l]); 
            x += temp;
            a[l] -= temp;
            ans += temp;
            if(a[l] == 0) l++;
        }
        // cout<<x<<' '<<ans<<nl;
        if(a[i]>0 && x==a[i]){
            a[i]-=x;
            ans+=1;
            x=0;
        }else if(a[i]>0){
            if(a[i] == 1){
                a[i] = 0;
                x++;
                ans++;
                continue;
            }
            int temp = (a[i]+x)/2;
            ans += temp - x + 1;
            a[i] -= 2*temp - x;
            x = a[i];
            ans += x;
            a[i] = 0;
        }
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