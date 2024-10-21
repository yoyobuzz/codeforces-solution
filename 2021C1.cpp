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

    int n, m, q;
    cin>>n>>m>>q;
    vi a(n), b(m);
    vi mp(n+1, 0);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int  i = 0; i < m; i++)    {
        cin>>b[i];
    }
    int l = 0;
    mp[a[0]] = 1;
    for(int i=0; i<m; i++){
        if(mp[b[i]] == 0){
            cout<<"TIDAK\n";
            return;
        }else{
            if(l+1<n && a[l] == b[i])
                mp[a[++l]] = 1;
        }
    }
    
    cout<<"YA"<<nl;


}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}