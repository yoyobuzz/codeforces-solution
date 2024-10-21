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
    vector<vector<int>> a(n, vector<int>(m));
    char temp;
    int x=0,y=0;
    f(i,0,n){
        f(j,0,m){
            cin>>temp;
            if(temp=='#'){
                a[i][j]=1;
            }else{
                a[i][j]=0;
            }
        }
    }
    // f(i,0,n){
    //     f(j,0,m){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<nl;
    // }
    f(i,0,n){
        f(j,0,m){
            if(a[i][j]==1){
                x=i;
                goto hehe;
            }
        }
    }
    hehe:
    f(i,0,m){
        f(j,0,n){
            if(a[j][i]==1){
                y=i;
                goto hoho;
            }
        }
    }
    hoho:
    cout<<x+1<<" "<<y+1<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}