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

bool good(int x, vi &a){
    int n = a.size();
    bool all = (n & 1) == 1;
    for(int i=1; i<n; i+=2){
        if(a[i] - a[i-1] > x){
            if(all){ 
                all = false; 
                i--;
            }
            else return false;
        }
    }
    return true;
}

void solve(){

    int n;
    cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;

    int l = 0, r = 1e18+1;
    while(l+1<r){
        int mid = l + (r-l)/2;
        if(good(mid, a))
            r = mid;
        else l = mid;
    }
    cout<<r<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}