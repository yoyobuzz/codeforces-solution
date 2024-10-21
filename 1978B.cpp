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

int sum(int n){
    int temp;
    if(n%2==0){
        temp = n/2;
        return temp*(n+1);
    }else{
        temp = (n+1)/2;
        return temp*n;
    }
}

void solve(){

    int n,a,b;
    cin>>n>>a>>b;
    int k;
    k=b-a+1;
    if(k<0){
        k=0;
    }
    k=min(min(n,b),k);
    int ans = (n-k)*a + k*(b+1) - sum(k);
    // ans += (sum(n)-sum(k));
    cout<<ans<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}