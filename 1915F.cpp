#include <bits/stdc++.h>

using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

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
    vector<pair<int, int>> a(n);
    indexed_set st;
    for(auto &[u, v]:a) {
        cin >>u >>v;
        st.insert(v);
    }
    sort(all(a));
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += st.order_of_key(*st.find(a[i].second));
        st.erase(st.find(a[i].second));
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