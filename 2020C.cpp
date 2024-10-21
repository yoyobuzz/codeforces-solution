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

bool isset(int n, int k){
    return (n & (1LL << k));
}

void setbit(int &n, int k){
    n |= 1LL << k;
}

void solve(){

    int b, c, d;
    cin>>b>>c>>d;

    map<vi, int> mp;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                int tempd = (i|j) - (i&k);
                if(mp.find({j, k, tempd})==mp.end()){
                    mp[{j, k, tempd}] = (i==1)?1:-1;
                }else if(mp[{j, k, tempd}]==1){
                    mp[{j, k, tempd}] = (i==1)?1:-1;
                }
            }
        }
    }

    int ans = 0LL;

    for(int i=0; i<63; i++){
        vi temp = {isset(b, i), isset(c, i), isset(d, i)};
        if(mp[temp]==1LL)
            setbit(ans, i);
    }
    // cout<<((ans|b) - (ans&c))<<nl;
    if(ans <= 1LL << 61LL && ((ans|b) - (ans&c) == d)){
        cout<<ans<<nl;
    }else{
        cout<<-1<<nl;
    }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}