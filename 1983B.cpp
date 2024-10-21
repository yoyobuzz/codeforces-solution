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
    vector<vi> a(n,vi(m)), b(n,vi(m));
    vector<string> c(n);
    f(i,0,n){
        cin>>c[i];
    }
    f(i,0,n){
        f(j,0,m){
            a[i][j] = c[i][j]-'0';
        }
    }
    f(i,0,n){
        cin>>c[i];
    }
    f(i,0,n){
        f(j,0,m){
            b[i][j] = c[i][j]-'0';
        }
    }
    f(i,0,n-1){
        f(j,0,m-1){
            if(a[i][j]!=b[i][j]){
                int diff = b[i][j]-a[i][j]+3;
                diff = diff%3;
                a[i][j] = (a[i][j]+diff)%3;
                a[i+1][j] = (a[i+1][j]+2*diff)%3;
                a[i][j+1] = (a[i][j+1]+2*diff)%3;
                a[i+1][j+1] = (a[i+1][j+1]+diff)%3;
            }
        }
        if(a[i][m-1]!=b[i][m-1]){
            cout<<"NO"<<nl;
            return;
        }
    }
    f(j,0,m){
        if(a[n-1][j]!=b[n-1][j]){
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;
}

signed main()
{
    fast_io
    
    test
    //cout<<"\n";
    return 0;
}