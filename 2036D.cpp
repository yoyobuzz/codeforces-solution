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

    int n, m;
    cin>>n>>m;
    vector<string> s(n);
    for(auto &i:s) cin>>i;
    vector<vi> a(n, vi(m));
    vector<vi> vis(n, vi(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = s[i][j]-'0';
            // cout<<a[i][j]<<" ";
        }
        // cout<<nl;
    }

    vector<int> fav = {1, 5, 4, 3};
    int ans = 0;
    for(int i=0; i<n; i++){
        // int j=i;
        for(int j=0; j<m; j++){
            if(vis[i][j] == 1) continue;
            vi temp;
            int x = i, y = j;
            int layer = min({n-i-1, i, m-j-1, j});
            // cout<<i<<" "<<j<<" "<<layer<<nl;
            int cnt = 1;
            vis[x][y] = 1;
            temp.push_back(a[x][y]);
            while(y < m-j-1){
                y++;
                vis[x][y] = 1;
                temp.push_back(a[x][y]);
                
            }
            while(x < n-i-1){
                x++;
                vis[x][y] = 1;
                temp.push_back(a[x][y]);
                
            }
            while(y > j){
                y--;
                vis[x][y] = 1;
                temp.push_back(a[x][y]);
                
            }
            while(x > i){
                x--;
                vis[x][y] = 1;
                temp.push_back(a[x][y]);
                
            }
            temp.pop_back();
            // for(auto x:temp) cout<<x<<" ";
            // cout<<nl;
            for(int p=0; p<temp.size(); p++){
                int count = 0;
                for(int q=0; q<4; q++){
                    if(temp[(q+p)%(temp.size())] == fav[q]){
                        count++;
                    }else break;
                }
                if(count == 4) ans++;
            }
            // if(temp == fav) ans++;
        }
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