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

int median(vector<int> &a, int i){
    int n = a.size();
    if(n%2==0 && i>(n+1)/2){
        return a[(n+1)/2 -1];
    }else if(n%2==0 && i<=(n+1)/2){
        return a[(n+1)/2];
    }else if(n%2==1 && i>=(n+1)/2){
        return a[(n+1)/2 -2];
    }else{
        return a[(n+1)/2] -1;
    }
}

int median_index(vector<int> &a, int i){
    int n = a.size();
    i++;
    if(n%2==0 && i>(n+1)/2){
        return (n+1)/2 -1;
    }else if(n%2==0 && i<=(n+1)/2){
        return (n+1)/2;
    }else if(n%2==1 && i>=(n+1)/2){
        return (n+1)/2 -2;
    }else{
        return (n+1)/2 -1;
    }
}

// int max_median(vector<int> &a, int i, int k){
//     int n = a.size();
//     int med = median(a, i);
//     int medi = median_index(a, i);
//     for(int j = medi+1; j < n; j++){
//         if(a[j]-med<<)
//     }
// }

void solve(){

    int n, k;
    cin>>n>>k;
    // vi a(n), b(n);
    vector<pair<int, int>> a(n);
    // int ans = 0;
    vi scores(n);
    for(int i = 0; i < n; i++){
        cin>>a[i].first;
        scores[i] = a[i].first;
    }
    for(int i = 0; i < n; i++){
        cin>>a[i].second;
        // adds += b[i];
    }
    sort(all(a));
    vi b(n);
    for(int i = 0; i < n; i++){
        b[i] = a[i].first;
    }
    for(int i = 0; i < n; i++){
        scores[i]+=median(b, i);
    }
    if(k==0){
        cout<<*max_element(all(scores))<<nl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(a[i].second==1){
            scores[i]+=k;
        }else if(a[median_index(b, i)].second==1){
            scores[i]+=k;
        }else{
            // scores[i]+=median(b, i);
        }
    }
    cout<<*max_element(all(scores))<<nl;

    // int adds = 0;
    
    int i1 = (n+1)/2 -2;
    int i2 = (n+1)/2 -1;
    int i3 = (n+1)/2;
    // unordered_map<int, int> mp;
    // unordered_map<int, vector<int>> whowhomedian;
    // for(int i = 0; i < n; i++){
    //     mp[median_index(a, i)]++;
    //     whowhomedian[median_index(a, i)].push_back(i);
    //     a[i]+=median(a, i);
    // }
    
    // vector<pair<int, int>> meds;
    // for(auto x: mp){
    //     meds.push_back({x.second, x.first});
    // }
    // sort(all(meds));
    // reverse(all(meds));
    // for(auto x: meds){
    //     if(b[x.second]==1){
    //         for(auto y: whowhomedian[x.second]){
    //             a[y]+=;
    //         }
    //         // ans+=k*(x.first);
    //         // cout<<ans<<nl;
    //         // return;
    //     }
    // }
    // // for(auto x: meds){
    // //     cout<<x.first<<" "<<x.second<<nl;
    // // }

    // cout<<ans+min(k, adds)<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}