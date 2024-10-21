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
    string s;
    cin>>s;
    vi a(n);
    f(i,0,n){
        a[i]=s[i]-'0';
    }
    int count = 0;
    
    // f(i,0,n){
    //     int x = a[i];
    //     if(x>n || x==0){
    //         continue;
    //     }
    //     int l=max(i+1-x,0LL);
    //     int r=min(i,n-x);
    //     // cout<<l<<" "<<r<<nl;
    //     f(j,l,r+1){
    //         int sum=0;
    //         f(k,j,j+x+1){
    //             sum+=a[k];
    //         }
    //         if(sum==x){
    //             count++;
    //         }
    //     }
    // }
    // cout<<count<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}