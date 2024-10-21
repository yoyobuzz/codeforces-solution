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

    int n, k;
    cin>>n>>k;
    map<int, int> mp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    queue<int> q;
    int prev = -1, curr = 0;
    int ans = 0;
    
    for(auto i:mp){
        if(prev == -1 || i.first == prev + 1){
            curr += i.second;
            q.push(i.second);
            prev = i.first;
        }else{
            while (!q.empty()) q.pop();
            curr = i.second;
            q.push(i.second);
            prev = i.first;
        }
        if(q.size()>k){
            curr -= q.front();
            q.pop();
        }
        ans = max(ans, curr);
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