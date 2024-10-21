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
    vi a(n);
    set<int> st;
    set<int> sing;
    unordered_map<int,int> mp;
    f(i,0,n){
        cin>>a[i];
        mp[a[i]]++;
        st.insert(a[i]);
    }
    f(i,0,n){
        if(mp[a[i]]==1) sing.insert(a[i]);
    }
    int ans = 0;
    unordered_map<int,bool> vis;
    int itst = 0, itsing = 0;
    int lst = st.size(), lsing = sing.size();
    vi stv(lst), singv(lsing);
    int iterea = 0;
    for(auto i:st){
        stv[iterea]=i;
    }
    iterea = 0;
    for(auto i:sing){
        singv[iterea]=i;
    }
    sort(all(a));
    f(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<nl;

    // for(auto i:st){
    //     cout<<i<<" ";
    // }
    // cout<<nl;
    // for(auto i:sing){
    //     cout<<i<<" ";
    // }
    // cout<<nl;

    // if(lsing==0){
    //     cout<<(lst+1)/2<<nl;
    //     return;
    // }

    while(itst<lst){
        if(itsing<lsing){
            while(itst<lst && vis[stv[itst++]]==1){
                itst++;
            };
            if(itst<lst){
                vis[stv[itst]]=1;
                ans++;
            }
            while(itsing<lsing && vis[singv[itsing++]]==1){
                itsing++;
            };
            if(itsing<lsing)
                vis[singv[itsing]]=1;
        }else{
            while(itst<lst && vis[stv[itst]]==1){
                itst++;
            };
            if(itst<lst){
                vis[stv[itst]]=1;
                ans++;
                while(itst<lst && vis[stv[itst++]]==1){
                    itst++;
                };
                if(itst<lst){
                    vis[stv[itst]]=1;
                }
            }
            
        }
    }
    // cout<<ans<<nl;
    // sort(all(a));
    // f(i,0,n){
    //     cout<<a[i]<<" ";
    // }
    // cout<<nl;
    // int ans = st.size();
    // if(ans%2==0){
    //     cout<<ans/2<<nl;
    // }else{
    //     cout<<(ans)/2+1<<nl;
    // }
    // cout<<(ans)/2+1<<nl;
    // sort(all(a));
    // int ans = 0;
    // set<int> sta;
    // f(i,0,n){
    //     if(sta.find(a[i])!=sta.end()){
    //         sta.insert(a[i]);
    //         ans++;
    //     }
    //     sta.insert(a[i]);
    // }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}