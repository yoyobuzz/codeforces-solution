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
    vi a(n), b(n);
    for(auto &i:a) cin>>i;
    for(auto &i:b) cin>>i;
    vi pref(n, 0);
    pref[0] = b[0];
    for(int i=1; i<n; i++){
        pref[i] = pref[i-1] + b[i];
    }
    vi cnt(n, 0), ans(n, 0);
    int sum = 0;
    for(int i = 0; i<n; i++){
        auto it = upper_bound(pref.begin()+i, pref.end(), a[i]+sum);
        int j = it - pref.begin();
        if(j>0){
            cnt[j-1]++;
        }
        if(i>0){
            cnt[i-1]--;
        }
        if(j<n && j>0){
            ans[j] += a[i] - (pref[j-1] - sum);
        }else if(j==0){
            ans[j] = min(a[j], b[j]);
        }
        sum+=b[i];
    }
    int temp = 0;
    for(int i=n-1; i>=0; i--){
        ans[i] += b[i]*(temp+cnt[i]);
        temp += cnt[i];
    }
    for(auto i:ans) cout<<i<<" ";
    cout<<nl;
    

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}