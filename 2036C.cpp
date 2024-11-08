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

bool check(int i, string &s){
    if(i+3 >= s.size() || i<0) return 0;
    if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0'){
        return 1;
    }else{
        return 0;
    }
}

void solve(){

    string s;
    cin>>s;
    int n = s.size();
    set<int> st;
    for(int i=0; i<n; i++){
        if(check(i, s)) st.insert(i);
    }                                                                                   
    int q;
    cin>>q;
    while(q--){
        int u, v;
        cin>>u>>v;
        u--;
        s[u] = '0' + v;
        for(int i=u-3; i<=u; i++){
            st.erase(i);
            if(check(i, s)) st.insert(i);
        }
        if(!st.empty())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}