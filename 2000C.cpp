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
    f(i, 0, n){
        cin>>a[i];
    }

    int m;
    cin>>m;

    string s;
    f(i, 0, m){
        bool flag = true;
        cin>>s;
        // if(!flag)
        //     continue;
        if(s.length()!=n){
            cout<<"NO"<<nl;
            // flag = false;
            continue;
        }
        unordered_map<char, int> mpc;
        unordered_map<int, char> mpi;
        f(j, 0, n){
            if(mpc.find(s[j])==mpc.end() && mpi.find(a[j])==mpi.end()){
                mpc[s[j]]=a[j];
                mpi[a[j]]=s[j];
            }else if(mpc[s[j]]==a[j] && mpi[a[j]]==s[j]){
                // cout<<"NO"<<nl;
                // break;
            }else{
                flag = false;
                cout<<"NO"<<nl;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<nl;
    }
    // if(!flag)
    //     cout<<"NO"<<nl;
    // else
    //     cout<<"YES"<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}