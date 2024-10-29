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
    for(auto &i:a) cin>>i;
    string s;
    cin>>s;
    int zero = 0, one = 0;
    vi pref_xor(n+1, 0);
    for(int i=0; i<n; i++){
        pref_xor[i+1] = pref_xor[i]^a[i];
        if(s[i]=='1') one ^= a[i];
        if(s[i]=='0') zero ^= a[i];
    } 
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int l, r;
            cin>>l>>r;
            one = one ^ (pref_xor[r] ^ pref_xor[l-1]);
            zero = zero ^ (pref_xor[r] ^ pref_xor[l-1]);
        }else{
            int x;
            cin>>x;
            if(x==0) cout<<zero<<" ";
            else cout<<one<<" ";
        }
    }
    cout<<nl;


}

signed main()
{
    // fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}