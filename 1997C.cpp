#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define aint(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

// void solve(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     stack<int> st;
//     int ans = 0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='_'){
//             if(!st.empty()){
//                 int temp = st.top();
//                 st.pop();
//                 ans+=i-temp;
//             }else{
//                 st.push(i);
//             }
//         }
//         else if(s[i]=='(')
//             st.push(i);
//         else if(s[i]==')'){
//             if(!st.empty()){
//                 int temp = st.top();
//                 st.pop();
//                 ans+=i-temp;
//             }
//         }
//     }
//     cout<<ans<<nl;
// }

void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<int> st;
    for(int i=0;i<n;i++) {
        if(s[i]=='_') {
            if(!st.empty()) {
                s[st.top()]='(';
                s[i]=')';
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        else if(s[i]=='(')
            st.push(i);
        else if(s[i]==')') {
            if(!st.empty()) {
                s[st.top()]='(';
                st.pop();
            }
        }
    }
    int a = 0, b = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='(')
            a+=i;
        else if(s[i]==')')
            b+=i;
    }
    cout<<b-a<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}