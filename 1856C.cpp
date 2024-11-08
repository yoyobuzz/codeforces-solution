// UNSOLVED

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

bool good(int x, vi &a, int k){
    int count = 0;
    int n = a.size();
    int mx = *max_element(all(a));
    for(int i=0; i<n-1; i++){
        // vi temp = a;
        int temp = max_element(a.begin()+i, a.end())- a.begin();
        int cnt = 0;
        for(int j=i; j<=temp; j++){
            cnt += a[temp] - a[j];
        }
        if(cnt>k) continue;
        int j = i+1;
        while(cnt<k && j<=temp){
            cnt+=j;
            if(cnt<=k){
                mx = max(mx, a[i]+j-i+1);
            }else{
                break;
            }
            j++;
        }
    }

    return mx >= x;
}

void solve(){

    int n, k;
    cin>>n>>k;
    vi a(n);
    for(auto &i:a) cin>>i;

    int mx = *max_element(all(a));
    for(int i=0; i<n-1; i++){
        // vi temp = a;
        int temp = i, tmp = a[i];
        for(int j=i; j<n; j++){
            if(a[j] >= tmp){
                tmp=a[j];
                temp=j;
            }
        }
        int cnt = 0;
        for(int j=i; j<=temp; j++){
            cnt += a[temp] - a[j];
        }
        if(cnt>k) continue;
        int j = 1;
        while(cnt<k && i+j<=temp){
            cnt+=j;
            if(cnt<=k){
                mx = max(mx, tmp+j);
            }else{
                break;
            }
            j++;
        }
    }
    cout<<mx<<nl;
    // int l = *max_element(all(a)), r = 2e8;

    // while(l+1<r){
    //     int mid = (l+r)/2;
    //     if(good(mid, a, k)){
    //         l = mid;
    //     }else{
    //         r = mid;
    //     }
    // }
    // cout<<l<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}