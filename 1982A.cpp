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

    int as,ae, bs,be;
    cin>>as>>bs>>ae>>be;
    if(as>=bs && ae<=be){
        cout<<"NO\n";
    }else if(bs>=as && be<=ae){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}