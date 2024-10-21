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
    vi a(n),b(n);
    f(i,0,n){
        cin>>a[i];
    }
    f(i,0,n){
        cin>>b[i];
    }
    int m;
    cin>>m;
    vi d(m);
    map<int,int> mp;
    f(i,0,m){
        cin>>d[i];
        mp[d[i]]++;
    }
    f(i,0,n){
        if(b[i]==d[m-1]){
            break;
        }else if(i==n-1){
            cout<<"NO\n";
            return;
        }
    }
    f(i,0,n){
        if(mp[b[i]]>0 && a[i]!=b[i]){
            mp[b[i]]--;
            b[i] = a[i];
        }
    }
    f(i,0,n){
        if(a[i] != b[i]){
            cout<<"NO\n";
            return;
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