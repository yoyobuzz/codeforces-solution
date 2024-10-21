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

    string s;
    cin>>s;
    int n = s.size();
    reverse(all(s));
    f(i,0,n-1){
        int cur = s[i]-'0'; 
        int next = s[i+1]-'0';
        int tempit = i+1;
        while(next==0){
            s[tempit] = '9';
            next = s[++tempit]-'0';
        }
        s[tempit]=to_string(next-1)[0];
        if(cur==9){
            cout<<"NO"<<nl;
            return;
        }
    }
    // cout<<s<<nl;
    if(s[n-1]=='0'){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}