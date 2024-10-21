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
    cin>>n;
    vi x(n),y(n);
    f(i,0,n){
        cin>>x[i]>>y[i];
        if(y[i]<-1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }

}

signed main()
{
    fast_io
    
    int n;
    cin>>n;
    vi x(n),y(n);
    f(i,0,n){
        cin>>x[i]>>y[i];
        if(y[i]<-1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    
    //cout<<"\n";
    return 0;
}