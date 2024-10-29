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

bool good(int x, vector<pair<int, int>> segs, vector<int> op, int n){
    vi a(n, 0);
    for(int i=0; i<x; i++){
        a[op[i]-1] = 1;
    }
    vi prefs(n+1, 0);
    for(int i = 1; i <= n; i++){
        prefs[i] = a[i-1] + prefs[i-1];
    }
    for(auto &[u, v]:segs){
        if(prefs[v]-prefs[u-1] > (v-u+1)/2){
            return true;
        }
    }

    return false;
}


void solve(){

    int n, m;
    cin>>n>>m;
    vector<pair<int, int>> segs(m);
    for(auto &[u, v]:segs) cin>>u>>v;
    int q;
    cin>>q;
    vi op(q);
    for(auto &i:op) cin>>i;

    int l = 0, r = q+1;

    while(l+1<r){
        int mid = (l+r)/2;
        if(good(mid, segs, op, n)){
            r = mid;
        }else{
            l = mid;
        }
    }
    if(r!=q+1){
        cout<<r<<nl;
    }else{
        cout<<-1<<nl;
    }


}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}