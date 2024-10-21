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
    // vector<pair<char, int>> v;
    vector<string> v(2*n);
    string trump;
    cin>>trump;
    int c=0,d=0,h=0,s=0, t=0;
    vector<string> cs, ds, hs, ss, trumps;
    f(i, 0, 2*n){
        cin>>v[i];
        if(v[i][1]==trump[0]){
            trumps.push_back(v[i]);
            t++;
        }else{
            if(v[i][1]=='C') {
                cs.push_back(v[i]);
                c++;
            }
            if(v[i][1]=='D'){ 
                ds.push_back(v[i]);
                d++;
            }
            if(v[i][1]=='H'){
                hs.push_back(v[i]);
                h++;
            }
            if(v[i][1]=='S'){ 
                ss.push_back(v[i]);
                s++;
            }
        }
        // swap(v[i][0], v[i][1]);
        // cin>>x>>c;
        // v.push_back({c, x});
    }
    sort(all(cs));
    sort(all(ds));
    sort(all(hs));
    sort(all(ss));
    sort(all(trumps));
    // sort(all(v));
    // vector<pair<string, string>> ans;
    vector<string> ans;
    if(c%2 + d%2 + h%2 + s%2 > t){
        cout<<"IMPOSSIBLE"<<nl;
        return;
    }
    // cout<<n<<" p"<<nl;
    int temp = 0;
    f(i, 0, c){
        ans.push_back(cs[i]);
        if(c%2==1 && i==c-1){
            ans.push_back(trumps[temp++]);
        }
    }
    f(i, 0, d){
        ans.push_back(ds[i]);
        if(d%2==1 && i==d-1){
            ans.push_back(trumps[temp++]);
        }
    }
    f(i, 0, h){
        ans.push_back(hs[i]);
        if(h%2==1 && i==h-1){
            ans.push_back(trumps[temp++]);
        }
    }
    f(i, 0, s){
        ans.push_back(ss[i]);
        if(s%2==1 && i==s-1){
            ans.push_back(trumps[temp++]);
        }
    }
    f(i, temp, t){
        ans.push_back(trumps[i]);
    }
    for(int i=0; i<2*n; i+=2){
        cout<<ans[i]<<" "<<ans[i+1]<<nl;
    }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}