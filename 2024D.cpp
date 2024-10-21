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

// int dp[400002][2];
vector<vector<int>> dp;

// int helper(int i, bool include, set<int> &st, vi &a, vi &b){

//     auto it = st.lower_bound(i);
//     if(include){
//         int take = a[i];
//         if(st.size() == 1) 
//             return take;
//         st.erase(i);
//         it = st.lower_bound(i);
//         if(it != st.begin()){
//             it--;
//             if(it != st.end())
//                 take += max(helper(*it, 0, st, a, b), helper(*it, 1, st, a, b));
//         }
//         st.insert(i);
//         return take;
//     }else{
//         int no = 0;
//         if(st.size() == 1) 
//             return no;
//         st.erase(i);
//         it = st.upper_bound(b[i]);
//         if(it != st.begin()){
//             it--;
//             if(it != st.end())
//                 no += max(helper(*it, 1, st, a, b), helper(*it, 0, st, a, b));
//         }
//         st.insert(i);
//         return no;
//     }
// }
int helper(int i, bool include, set<int> &st, vi &a, vi &b){

    if(dp[i][include] != -1){
        return dp[i][include];
    }

    auto it = st.lower_bound(i);
    if(include){
        int take = a[i];
        if(st.size() == 1) 
            return dp[i][include] = take;
        st.erase(i);
        it = st.lower_bound(i);
        if(it != st.begin()){
            it--;
            // if(it != st.end())
                take += max(helper(*it, 0, st, a, b), helper(*it, 1, st, a, b));
        }
        // st.insert(i);
        return dp[i][include] = take;
    }else{
        int no = 0;
        if(st.size() == 1) 
            return dp[i][include] = no;
        st.erase(i);
        it = st.upper_bound(b[i]);
        if(it != st.begin()){
            it--;
            // if(it != st.end())
                no += max(helper(*it, 1, st, a, b), helper(*it, 0, st, a, b));
        }
        // st.insert(i);
        return dp[i][include] = no;
    }
}

// int helper(int i, int include, set<int> &st, vi &a, vi &b){

//     if(dp[i][include] != -1){
//         return dp[i][include];
//     }

//     st.erase(i);
//     int take = a[i], no = 0;

//     if(st.empty()) 
//         return dp[i][include] = max(take, no);
//     // take
//     auto it = st.lower_bound(i);
//     if(it != st.begin()){
//         it--;
//         take += helper(*it, 1, st, a, b);
//     }
//     // not take
//     it = st.upper_bound(b[i] - 1);
//     if(it != st.begin()){
//         it--;
//         no = helper(*it, 0, st, a, b);
//     }
//     st.insert(i);
//     return dp[i][include] = max(take, no);
// }


void solve(){

    int n;
    cin >> n;
    vi a(n), b(n);
    for(auto &i:a) cin >> i;
    for(auto &i:b) cin >> i;
    for(auto &i:b) i--;;
    set<int> st;
    for(int i=0; i<n; i++) st.insert(i);
    // memset(dp, -1, sizeof dp);
    dp.assign(n+1, vi(2, -1));
    cout<<max(helper(0, 1, st, a, b), helper(0, 0, st, a, b))<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}