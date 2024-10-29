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

signed main()
{
    fast_io
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x = 0, y;
    for(auto c:s){
        if(c == '+') x++;
    }
    y = n - x;
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int a, b;
        cin>>a>>b;
        // if(a<b) swap(a, b);
        if(x == y){
            cout<<"YES"<<nl;
        }else if(a == b && x != y){
            cout<<"NO"<<nl;
        }else{
            int temp = ((y-x)*b/(a-b));
            if(((y-x)*b)%(a-b) == 0 && temp <=x && temp >=-y ){
                cout<<"YES"<<nl;
            }else{
                cout<<"NO"<<nl;
            }
        }
    }
    
    //cout<<"\n";
    return 0;
}