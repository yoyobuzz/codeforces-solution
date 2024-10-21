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
    cin >> n;
    vi a(n+1);
    f(i,1,n+1) cin >> a[i];
    
    vi pre(n+1), pref(n+1);
    // f(i,0,n) {
    //     cin>>a[i];
    //     if(i>0){
    //         pre[i]=pre[i-1]+a[i];
    //         // if(pre[i-1]+a[i]>=0){
    //         //     pre[i]=pre[i-1]+a[i];
    //         // }else{
    //         //     pre[i]=pre[i-1]+(a[i]);
    //         // }
    //     }else{
    //         pre[i]=a[i];
    //     }
    // }
    // cout<<pre[n-1]<<nl;
    f(i,1,n+1){
        if (a[i] > 0) {
            pref[i] = pref[i - 1] + a[i];
            pre[i] = max(pre[i - 1] + a[i], abs(pref[i - 1] + a[i]));
        }
        else {
            pref[i] = pref[i - 1] + a[i];
            pre[i] = max(pre[i - 1] + a[i], abs(pref[i - 1] + a[i]));

        }
    }
    cout<< pre[n] <<nl;
}

// void solve(){
//     int n;
//     cin>>n;
//     vi a(n);
//     f(i,0,n) cin>>a[i];

//     int r=n-1;
//     int ans=0;
//     while(r>=0 && a[r]>=0){
//         ans+=a[r];
//         r--;
//     }

//     int sum=0;
//     for(int i=0;i<=r;i++){
//         sum+=a[i];
//     }
//     ans+=abs(sum);
//     cout<<ans<<endl;

// }


// void solve(){

//     int n;
//     cin>>n;
//     vi a(n);
//     f(i,0,n) {
//         cin>>a[i];
//     }   
//     int c=0;
//     f(i,0,n-1) {
//         if(a[i]*a[i+1]<0LL){
//             c=abs(c+a[i]);
//         }else{
//             c=(c+a[i]);
//         }
//     }
//     c=abs(c+a[n-1]);
//     cout<<c<<nl;

// }

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}