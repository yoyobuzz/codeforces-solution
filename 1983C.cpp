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

bool calc(vi &a, vi &b, vi &c, int &la, int &lb, int &lc, int &ra, int &rb, int &rc, int &targ){
    int n = a.size();
    int temp = 0;
    int it = 0;
    la = 0, lb = 0, lc = 0;
    ra = 0, rb = 0, rc = 0;
    f(i,0,n){
        if(it==0){
            temp+=a[i];
            if(temp>=targ){
                ra = i;
                lb = i+1;
                it=1;
                temp = 0;
            }
        }else if(it==1){
            temp+=b[i];
            if(temp>=targ){
                rb = i;
                lc = i+1;
                it=2;
                temp = 0;
            }
        }else if(it==2){
            temp+=c[i];
            if(temp>=targ){
                rc = n-1;
                break;
            }
        }
    }
    if(rc==n-1){
        return true;
    }else{
        return false;
    }
}


void solve(){

    int n;
    cin>>n;
    vi a(n), b(n), c(n);
    int tot = 0;
    f(i,0,n){
        cin>>a[i];
        tot+=a[i];
    }
    f(i,0,n){
        cin>>b[i];
    }
    f(i,0,n){
        cin>>c[i];
    }
    int targ = tot/3;
    if(tot%3!=0){
        targ++;
    }
    int la=0, lb=0, lc=0;
    int ra=0, rb=0, rc=0;
    
    if(calc(a,b,c,la,lb,lc,ra,rb,rc,targ)){
        cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<nl;
        return;
    }else if(calc(b,a,c,lb,la,lc,rb,ra,rc,targ)){
        cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<nl;
        return;
    }else if(calc(c,a,b,lc,la,lb,rc,ra,rb,targ)){
        cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<nl;
        return;
    }else if(calc(a,c,b,la,lc,lb,ra,rc,rb,targ)){
        cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<nl;
        return;
    }else if(calc(b,c,a,lb,lc,la,rb,rc,ra,targ)){
        cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<nl;
        return;
    }else if(calc(c,b,a,lc,lb,la,rc,rb,ra,targ)){
        cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<nl;
        return;
    }else{
        cout<<-1<<nl;
    }
    // cout<<la+1<<" "<<ra+1<<" "<<lb+1<<" "<<rb+1<<" "<<lc+1<<" "<<rc+1<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}