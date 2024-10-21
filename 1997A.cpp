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
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            if(s[i]=='a'){
                cout<< (s.substr(0, i) + "z" + s.substr(i));
            }else{
                cout<< (s.substr(0, i) + "a" + s.substr(i));
            }
            cout<<nl;
            return;
        }
    }
    if(s[0]!='a'){
        cout<< "a" + s <<nl;
    }else{
        cout<< "b" + s<<nl;
    }


}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}