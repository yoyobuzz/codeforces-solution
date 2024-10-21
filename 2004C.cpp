#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve(ttttt);
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

void solve(int t){
    int n, k;
    cin>>n>>k;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int aa=0, bb=0;
    for(int i=0;i<n;i++){
        if(n&1 && i==n-1) cout<<max(aa-bb-k, 0LL)+a[n-1]<<nl; 
        if(!i&1) aa+=a[i];
        else bb+=a[i];
        if(!(n&1) && i==n-1) cout<<max(aa-bb-k, 0LL)<<nl; 
    }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}