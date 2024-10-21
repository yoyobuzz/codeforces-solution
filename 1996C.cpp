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

    int n, q;
    string s, t;
    cin>>n>>q>>s>>t;
    vector<vi> a(n, vector<int> (26, 0));
    vector<vi> b(n, vector<int> (26, 0));
    for(int i = 0; i < n; i++){
        a[i][s[i]-'a']++;
        if(i>0){
            for(int j = 0; j < 26; j++){
                a[i][j] += a[i-1][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        b[i][t[i]-'a']++;
        if(i>0){
            for(int j = 0; j < 26; j++){
                b[i][j] += b[i-1][j];
            }
        }
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        l--; r--;
        int count = 0;
        for(int i = 0; i < 26; i++){
            int x = a[r][i] - (l>0?a[l-1][i]:0);
            int y = b[r][i] - (l>0?b[l-1][i]:0);
            count += abs(x-y);
        }
        cout<<count/2<<nl;
    }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}