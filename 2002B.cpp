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
    vi a(n), b(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    for(int i = 0; i<n; i++){
        if(a[i]!=b[i]){
            break;
        }
        if(i==n-1){
            cout<<"Bob\n";
            return;
        }
    }
    for(int i = 0; i<n; i++){
        if(a[i]!=b[n-i-1]){
            break;
        }
        if(i==n-1){
            cout<<"Bob\n";
            return;
        }
    }
    cout<<"Alice\n";

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}