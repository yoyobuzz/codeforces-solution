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

int count(vector<vi> &a){
    int n = a.size();
    int ans = 0;
    if(ans==0 && (a[0][0]==1||a[0][1]==1)){
        ans++;
    }
    f(i, 1, n){
        if(ans==0 && (a[i][0]==1||a[i][1]==1)){
            ans++;
        }
        else if(!(a[i-1][0]==1 && a[i][0]==1) && !(a[i-1][1]==1 && a[i][1]==1)){
            ans++;
        }
    }
    return ans;
}

void solve(){

    int n;
    cin>>n;
    vector<vi> a(n, vi(2));
    
    char c;
    f(i, 0, n){
        cin>>c;
        if(c!='.'){
            a[i][0] = 0;
        }else{
            a[i][0] = 1;
        }
    }
    f(i, 0, n){
        cin>>c;
        if(c!='.'){
            a[i][1] = 0;
        }else{
            a[i][1] = 1;
        }
    }
    if(n<=2){
        cout<<0<<nl;
        return;
    }
    int ans = 0;
    for(int i=2; i<n; i++){
        if(a[i][0]==0 && a[i-1][0]==1 && a[i-2][0]==0 && a[i][1]==1 && a[i-1][1]==1 && a[i-2][1]==1){
            ans++;
        }
        if(a[i][0]==1 && a[i-1][0]==1 && a[i-2][0]==1 && a[i][1]==0 && a[i-1][1]==1 && a[i-2][1]==0){
            ans++;
        }
    }
    cout<<ans<<nl;  
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}