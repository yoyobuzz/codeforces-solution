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

    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    f(i,0,n) cin>>a[i];
    vector<pair<int, int>> zeros(n), length(n), reverselen(n);
    unordered_map<int, int> mp;
    f(i,0,n){
        int temp=0;
        int x = a[i];
        while(x%10==0){
            x/=10;
            temp++;
        }
        zeros[i].first=temp;
        zeros[i].second=i;
        length[i].first=to_string(a[i]).size();
        length[i].second=i;
        reverselen[i].first=length[i].first-zeros[i].first;
        reverselen[i].second=i;
    }
    // f(i,0,n){
    //     cout<<a[i]<<" ";
    // }
    // cout<<nl;
    // f(i,0,n){
    //     cout<<length[i].first<<" ";
    // }
    // cout<<nl;
    // f(i,0,n){
    //     cout<<zeros[i].first<<" ";
    // }
    // cout<<nl;
    // f(i,0,n){
    //     cout<<reverselen[i].first<<" ";
    // }
    // cout<<nl;
    sort(all(zeros));
    reverse(all(zeros));
    int ans = 0;
    f(i,0,n){
        if(i%2==0){
            ans+=reverselen[zeros[i].second].first;
        }else{
            ans+=length[zeros[i].second].first;
        }
    }
    if(ans<m+1){
        cout<<"Anna"<<nl;
    }else{
        cout<<"Sasha"<<nl;
    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}