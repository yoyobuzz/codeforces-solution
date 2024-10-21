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
    string s;
    cin>>s;
    int arr[4]={0};
    int bonus = 0;
    for(int i=0; i<4*n; i++){
        if(s[i]=='A') arr[0]++;
        else if(s[i]=='B') arr[1]++;
        else if(s[i]=='C') arr[2]++;
        else if(s[i]=='D') arr[3]++;
        // else if(s[i]=='?') bonus++;
    }
    int ans = 0;
    for(int i=0; i<4; i++){
        // cout<<arr[i]<<" ";
        ans += min(arr[i], n);
    }
    ans += bonus;
    cout<<ans<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}