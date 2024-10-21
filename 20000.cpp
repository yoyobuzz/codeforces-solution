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

    if(n<=101){
        cout<<"NO"<<nl;
        return;
    }
    string s = to_string(n);
    if(s[0]=='1' && s[1]=='0' && s[2]!='0' && stoi(s.substr(2))>=2){
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