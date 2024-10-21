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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int presum[n];
    presum[0] = a[0];
    for(int i=1;i<n;i++){
        presum[i] = presum[i-1] + a[i];
    }
    string s;
    cin>>s;
    int ans = 0;
    int l = 0, r = n-1;
    while(l < r){
        // cout<<l<<' '<<r<<nl;
        if(s[l] == 'R'){
            l++;
            continue;
        }
        if(s[r] == 'L'){
            r--;
            continue;
        }
        int sum = 0;
        if(l==0) sum += presum[r];
        else sum += (presum[r] - presum[l-1]);
        ans += sum;
        l++;
        r--;
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