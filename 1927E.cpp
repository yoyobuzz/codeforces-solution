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

    int n,k;
    cin>>n>>k;
    int buck = n/k;
    if(n%k>0){
        buck++;
    }
    int terms = (n+1)/2;
    // vector<vi> a(buck, vector<int>(terms));
    vi ans(n);
    int temp=1, temp1=n;
    bool inc = true;
    bool dec = false;
    f(i,0,k){
        f(j,0,buck){
            if(j*k+i>=n){
                continue;
            }
            if(i%2==0){
                ans[j*k+i]=temp;
                temp++;
            }else{
                ans[j*k+i]=temp1;
                temp1--;
            }
            // ans[j*k+i]=temp;
            // if(inc){
            //     temp++;
            // }else{
            //     temp--;
            // }
            // if(temp==(n+1)/2+1){
            //     temp=n;
            //     inc=false;
            // }
        }
    }
    f(i,0,n){
        cout<<ans[i]<<" ";
    }
    cout<<nl;
    // int l=1,r=n;
    // f(i,0,n){
    //     if(i%2==0){
    //         cout<<l++<<" ";
    //     }else{
    //         cout<<r--<<" ";
    //     }
    // }
    // cout<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}