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

signed main()
{
    fast_io
    
    int n, m, q;
    cin>>n>>m>>q;
    vector<vi> temp(n, vi(m));
    for(auto &i:temp)
        for(auto &j:i) cin>>j;
    
    vector<vi> a(m, vi(n));
    swap(m, n);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = temp[j][i];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=1; j<m; j++){
            a[i][j] = a[i][j-1] | a[i][j];
        }
    }
    
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<nl;
    // }
    
    while(q--){
        int qq;
        cin>>qq;
        int l = 0, r = m-1;
        int ans = 0;
        for(int i=0; i<qq; i++){
            int x, y;
            char op;
            cin>>x>>op>>y;
            x--;
            if(ans == -1) continue;
            if(op == '<'){
                auto temp = lower_bound(a[x].begin() + l, a[x].begin() + r + 1, y);
                if(temp == a[x].begin() + l) {
                    ans = -1;
                }else{
                    r = temp - a[x].begin() - 1;
                }
            }else if(op == '>'){
                auto temp = upper_bound(a[x].begin() + l, a[x].begin() + r + 1, y);
                if(temp == a[x].begin() + r + 1) {
                    ans = -1;
                }else{
                    l = temp - a[x].begin();
                }
            }
            if(l > r) ans = -1;
        }
        if(ans == -1 || l>r) l = -2;
        cout<<l+1<<nl;
    }

    //cout<<"\n";
    return 0;
}