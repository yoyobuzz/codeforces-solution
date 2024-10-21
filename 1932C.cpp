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
    vector<int> v(n);
    f(i,0,n){
        cin>>v[i];
    }
    string s;
    cin>>s;
    int last=0;
    
    for(int i=0,l=0,r=n-1;i<n-1;i++){
        if(s[i]=='R'){
            r--;
        }else{
            l++;
        }
        last = l;
    }
    vi ans(n);
    int product = v[last]%m;
    ans[0]=product;
    reverse(all(s));
    int l=last-1,r=last+1;
    f(i,1,n){
        if(s[i]=='L'){
            product = (product*(v[l--]%m))%m;
        }else{
            product = (product*(v[r++]%m))%m;
        }
        ans[i]=product;
    }
    reverse(all(ans));
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}
// #include <bits/stdc++.h>

// using namespace std;

// #define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// #define int long long
// #define test int ttttt; cin>>ttttt; while(ttttt--) solve();
// #define nl "\n"
// typedef vector<int> vi;
// typedef long long ll;
// #define all(a) (a).begin(), (a).end()
// #define f(i, p, n) for(int i=p; i<n; i++)

// void solve(){

//     int n, m;
//     cin>>n>>m;
//     vector<int> v(n);
//     vector<int> mods(n);
//     int count = 0, product = 1;
//     f(i, 0, n){ 
//         cin>>v[i];
//         mods[i] = v[i]%m;
//         if(mods[i]!=0){
//             count++;
//             product = (product*mods[i]);
//         }
//     }
//     // cout<<count<<nl;
//     count = n-count;
//     if(count==n){
//         product = 0;
//     }
//     int i = 0, j = n-1;
//     string s;
//     cin>>s;
//     f(k,0,n){
//         if(count>0){
//             cout<<0<<" ";
//         }
//         else{
//             cout<<product%m<<" ";
//         }
//         if(s[k]=='L'){
//             if(mods[i]==0){
//                 count--;
//             }else{
//                 product = (product/mods[i]);
//             }
//             i++;
//         }
//         else{
//             if(mods[j]==0){
//                 count--;
//             }else{
//                 product = (product/mods[j]);
//             }
//             j--;
//         }
//         // int temp = 1;
//         // f(l,i,j+1){
//         //     temp = (temp*mods[l])%m;
//         // }
//         // cout<<temp<<" ";
//         // if(s[k]=='L'){
//         //     i++;    
//         // }
//         // else{
//         //     j--;
//         // }
//     }
//     // f(k,0,n){
//     //     if(s[k]=='L'){
//     //         if(count>0){
//     //             cout<<0<<" ";
//     //         }else{
//     //             cout<<product%m<<" ";
//     //         }
//     //         if(mods[i]==0){
//     //             count--;
//     //         }else{
//     //             product = (product/mods[i]);
//     //         }
//     //         i++;
//     //     }
//     //     else{
//     //         if(count>0){
//     //             cout<<0<<" ";
//     //         }else{
//     //             cout<<product%m<<" ";
//     //         }
//     //         if(mods[j]==0){
//     //             count--;
//     //         }else{
//     //             product = (product/mods[j]);
//     //         }
//     //         j--;
//     //     }
//     // }
//     cout<<nl;
// }

// signed main()
// {
//     fast_io
    
//     test
    
//     //cout<<"\n";
//     return 0;
// }