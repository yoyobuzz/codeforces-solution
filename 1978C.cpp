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

vi ma(2000001,0);

int check(vi a){
    int temp=0;
    f(i,0,a.size()){
        temp+=abs(a[i]-i-1);
    }
    return temp;
}

void solve(){

    int n,k;
    cin>>n>>k;
    
    if(k>ma[n] || k%2!=0){
        cout<<"No\n";
        return;
    }
    vi a(n);
    f(i,0,n){
        a[i]=i+1;
    }
    int ans=0;
    // int i=1,j=n;
    // while(ma[j]>k){
    //     j--;
    // }
    // while(ans<k){
    //     if(ans+2*i<=k){
    //         ans+=2*(j-i);
    //         swap(a[i-1],a[j-i]);
    //     }
    //     i++;j--;
    // }
    int r = n-1;
    f(i,0,(n+1)/2){
        int j = min(n-i-1,r);
        while(ans+(j-i)*2>k && j>i){
            j--;
        }
        r=j+1;
        // if(ans==k){
        //     break;
        // }
        ans+=(j-i)*2;
        swap(a[i],a[j]);
    }
    cout<<"Yes\n";
    // cout<<check(a)<<" "<<k<<nl;
    f(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<nl;


}

signed main()
{
    fast_io
    
    
    ma[1]=0;
    ma[2]=2;
    f(i,3,2000002){
        ma[i]=2*(i-1)+ma[i-2];
    }

    test
    

    //cout<<"\n";
    return 0;
}