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

    int n,m;
    cin>>n>>m;
    vector<vi> a(n, vi(m)), b(n, vi(m));
    unordered_map<int, pair<int,int>> mp;
    f(i,0,n){
        f(j,0,m){
            cin>>a[i][j];
            mp[a[i][j]] = {i,j};
        }
    }
    f(i,0,n){
        int temp = 0;
        f(j,0,m){
            cin>>b[i][j];
        }
    }
    f(i,0,n){
        int temp = 0;
        f(j,0,m){
            if(j==0){
                temp = mp[b[i][j]].first;
            }else{
                if(mp[b[i][j]].first!=temp){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    f(i,0,m){
        int temp = 0;
        f(j,0,n){
            if(j==0){
                temp = mp[b[j][i]].second;
            }else{
                if(mp[b[j][i]].second!=temp){
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}