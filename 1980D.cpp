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
    vi a(n), b(n-1), c(n-1);
    f(i,0,n){
        cin>>a[i];
    }
    int index = 0, count = 0;
    f(i,0,n-1){
        b[i] = __gcd(a[i], a[i+1]);
        if(i>0 && b[i]<b[i-1]){
            index=i;
            break;
        }
    }
    if(index==0){
        cout<<"YES\n";
        return;
    }
    vi l(n-2), m(n-2), o(n-2);
    int itl=0,itm=0,ito=0;
    f(i,0,n-1){
        int temp = __gcd(a[i],a[i+1]);
        if(index!=i-1){
            l[itl++]=temp;
        }if(index!=i){
            m[itm++]=temp;
        }if(index!=i+1 && i+1<n-1){
            o[ito++]=temp;
        }
    }
    bool flagl=true, flagm=true, flago=true;
    f(i,0,n-2){
        if(i>0 && l[i]<l[i-1]){
            flagl=false;
        }
        if(i>0 && m[i]<m[i-1]){
            flagl=false;
        }
        if(i>0 && o[i]<o[i-1]){
            flagl=false;
        }
    }
    if(flagl||flagm||flago)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}