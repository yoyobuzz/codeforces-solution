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
    cin >> n;
    vector<pair<int, int>> a(n);
    for(auto &[u, v]:a) cin >> u >> v;

    sort(all(a), [](auto &a, auto &b){
        int inva = 0, invb = 0;
        inva += (a.first > b.first) + (a.first > b.second) + (a.second > b.first) + (a.second > b.second);
        invb += (b.first > a.first) + (b.first > a.second) + (b.second > a.first) + (b.second > a.second);
        if(inva != invb)
            return inva < invb;
        else return a.first + a.second < b.first + b.second;
    });

    for(auto &[u, v]:a) cout << u << " " << v << " ";
    cout<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}