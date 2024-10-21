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
    f(i,0,n){
        cin>>a[i];
    }
    int ans = 0;
    int index = 0;
    f(i,0,n){
        if(a[i]==0){
            index=0;
            continue;
        }
        ans = max(ans,a[i]+index++);
    }
    cout<<ans<<nl;
    // int count=0;
    // int ans=0;
    // while(count<n){
    //     count=0;
    //     f(i,0,n-1){
    //         if(a[i]>a[i+1] && i<n-1){
    //             a[i]=max(0LL,a[i]-1LL);
    //         }
    //         if(a[i]==0){
    //             count++;
    //         }
    //     }
    //     a[n-1]=max(0LL,a[n-1]-1LL);
    //     if(a[n-1]==0){
    //         count++;
    //     }
    //     ans++;
    //     if(count==n){
    //         break;
    //     }
    // }
    // cout<<ans<<nl;
    // int ma=*max_element(all(a));
    // int index;
    // int count=0;
    // f(i,0,n){
    //     if(a[i]==ma)
    //         index=i;
    // }
    // f(i,0,index){
    //     if(a[i]==0)
    //         count=i+1;
    // }
    // cout<<ma+index-count<<nl;
    // // cout<<*max_element(all(a))+max_element(all(a))-a.begin()<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}