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

    int n, k;
    cin>>n>>k;
    string s, t;
    cin>>s>>t;
    set<char> st;
    for(auto &c:s) st.insert(c);
    int m = st.size();

    vector<char> v;
    while(!st.empty()){
        v.push_back(*st.begin());
        st.erase(st.begin());
    }
    unordered_map<char, int> mp;
    for(int i=0; i<m; i++){
        mp[v[i]] = i;
    }
    int ans = 0;
    for(int i = 0; i < (1<<m); i++){
        if(__builtin_popcount(i) > k) continue;
        // cout<<__builtin_popcount(i)<<" ";
        int temp = 0;
        int l = 0;
        for(int j=0; j<n; j++){
            if(s[j] == t[j] || (1 == ((i>>(mp[s[j]]))&1))){
                // cout<<s[j]<<" ";
                temp += j-l+1;
            }else{
                l = j+1;
            }
        }
        // cout<<nl;
        ans = max(ans, temp);
    }
    cout<<ans<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}