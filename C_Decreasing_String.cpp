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
    int p;
    cin>>p;
    int k = n;
    int tot = 0;
    // if(n==1){
    //     cout<<s;
    //     return;
    // }
    while(tot + k < p && k>0){
        tot += k;
        k--;
    }
    int fin = p-tot-1;
    // cout<<k<<" "<<fin<<nl;
    stack<char> st;
    st.push(s[0]);
    for(int i=1; i<n; i++){
        while(!st.empty() && st.top()>s[i] && n-k>0){
            k++;
            st.pop();
        }
        st.push(s[i]);
    }
    string t;
    while(!st.empty()){
        t.push_back(st.top());
        st.pop();
    }
    reverse(all(t));
    // cout<<t<<nl;
    cout<<t[fin];
    // cout<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}