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
    vi a(n), b;
    f(i,0,n){
        cin>>a[i];
        if(i%2==0)
            b.emplace_back(a[i]);
    }
    cout<<*max_element(all(b))<<nl;


}

signed main()
{
    // fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}