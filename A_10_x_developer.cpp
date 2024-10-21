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


int n, a, b;
vector<int> v;

bool good(int x){
    int ca = 0, cb = 0;
    for(auto i:v){
        if(i<x){
            ca = ca + (x-i +a-1)/a;
        }
        if(i>x){
            cb = cb + (i-x)/b;
        }
    }
    return ca<=cb;
}

signed main()
{
    fast_io

    cin>>n>>a>>b;
    v.resize(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(all(v));
    int l = v[0], r = v[n-1]+1;
    while(l+1<r){
        int m = (l+r)/2;
        if(good(m)){
            l = m;
        } else {
            r = m;
        }
    }
    cout<<l<<nl;
    
    //cout<<"\n";
    return 0;
}