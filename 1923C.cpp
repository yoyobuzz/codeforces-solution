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

    int n,q;
    cin>>n>>q;
    vi a(n);
    vi prefsum(n);
    vi cnt1(n);
    f(i,0,n){
        cin>>a[i];
        cnt1[i]=(i==0)?((a[i]==1)?1:0):(cnt1[i-1]+((a[i]==1)?1:0));
        prefsum[i]=(i==0)?a[i]:(prefsum[i-1]+a[i]);
    }
    f(i,0,q){
        int l,r;
        cin>>l>>r;
        l--,r--;
        if(l==r){
            cout<<"NO\n";
            continue;
        }
        int sum = (l==0)?prefsum[r]:(prefsum[r]-prefsum[l-1]);
        int cnt = (l==0)?cnt1[r]:(cnt1[r]-cnt1[l-1]);
        
        if(sum >= r-l+1 + cnt){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}