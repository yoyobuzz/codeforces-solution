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
    string s;
    cin>>s;
    vi a(26, 0);
    f(i, 0, n){
        a[s[i]-'a']++;
    }
    set<pair<int, char>, greater<pair<int, char>>> st;
    for(int i=0; i<26; i++){
        if(a[i]>0)
            st.insert({a[i], 'a'+i});
    }
    string ans;
    auto p = *st.begin();
    st.erase(st.begin());
    ans.push_back(p.second);
    p.first--;
    if(p.first>0)
        st.insert(p);
    for(int i=0; i<n; i++){
        if(st.size()==0){
            cout<<ans<<nl;
            return;
        }
        auto p = *st.begin();
        st.erase(st.begin());
        if(p.second!=ans[ans.size()-1] || st.empty()){
            ans.push_back(p.second);
            p.first--;
            if(p.first>0)
                st.insert(p);
            continue;
        }
        auto q = *st.begin();
        st.erase(st.begin());
        ans.push_back(q.second);
        q.first--;
        if(q.first>0)
            st.insert(q);
        st.insert(p);
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}