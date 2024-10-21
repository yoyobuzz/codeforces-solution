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

    int n,f,k;
    cin>>n>>f>>k;
    vi a(n);
    f(i,0,n){
        cin>>a[i];
    }
    k--;
    int fav = a[f-1];
    sort(all(a),greater<int>());
    if(a[k]<fav){
        cout<<"YES\n";
        return;
    }else if(a[k]>fav){
        cout<<"NO\n";
        return;
    }else if(a[k]==fav){
        if(k+1<n && a[k+1]==fav){
            cout<<"MAYBE\n";
            return;
        }else{
            cout<<"YES\n";
            return;
        }
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}