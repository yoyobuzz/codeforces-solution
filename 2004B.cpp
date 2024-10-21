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

    int l, r;
    int L, R;
    cin>>l>>r;
    cin>>L>>R;
    if(l==L && r==R) {
        cout<<r-l<<endl;
        return;
    }
    if(l<r){
        swap(L, l);
        swap(R, r);
    }
    if(l>R or L>r) {
        cout<<1<<endl;
        return;
    }
    int ans = min(r,R)-max(l,L)+2;
    if(l==L)
        ans--;
    if(r==R)
        ans--;
    cout<<ans<<endl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}