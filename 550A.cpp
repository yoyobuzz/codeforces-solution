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

    string s;
    cin>>s;
    int n = s.size();
    for(int i=0; i<n-1; i++){
        if(s[i]=='A' && s[i+1]=='B'){
            for(int j=i+2; j<n-1; j++){
                if(s[j]=='B' && s[j+1]=='A'){
                    cout<<"YES\n";
                    return;
                }
            }
            break;
        }
    }
    for(int i=0; i<n-1; i++){
        if(s[i]=='B' && s[i+1]=='A'){
            for(int j=i+2; j<n-1; j++){
                if(s[j]=='A' && s[j+1]=='B'){
                    cout<<"YES\n";
                    return;
                }
            }
            break;
        }
    }
    cout<<"NO\n";
    // int ab=0, ba=0, aba=0, bab=0;
    // f(i,0,n-1){
    //     if(s[i]=='A' && s[i+1]=='B'){
    //         ab++;
    //     }
    //     if(s[i]=='B' && s[i+1]=='A'){
    //         ba++;
    //     }
    //     if(i<n-2){
    //         if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='A'){
    //             aba++;
    //         }
    //     }
    //     if(i<n-2){
    //         if(s[i]=='B' && s[i+1]=='A' && s[i+2]=='B'){
    //             bab++;
    //         }
    //     }
    // }
    // if(ab>0 && ba>0 && (aba<ab || aba<ba) && (bab<ab || bab<ba) ){
    //     cout<<"YES\n";
    // }else{
    //     if(aba>1 || bab>1){
    //         cout<<"YES\n";
    //         return;
    //     }
    //     cout<<"NO\n";
    // }

}

signed main()
{
    fast_io
    
    // test
    solve();
    
    //cout<<"\n";
    return 0;
}