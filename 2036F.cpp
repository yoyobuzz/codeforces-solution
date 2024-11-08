// UNSOLVED

#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
#define aint(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

int findXOR(int n)
{
    if (n<=0) return 0;
    int mod = n % 4;

    if (mod == 0)
        return n;

    else if (mod == 1)
        return 1;

    else if (mod == 2)
        return n + 1;

    else if (mod == 3)
        return 0;
}

void solve(){
    int l,r,i,k;
    cin>>l>>r>>i>>k;
    int l1,l2,r1,r2,l3,r3;
    
    l1 = findXOR(l-1);
    r1 = findXOR(r);
 
    r2 = r>>i;    
    if((r%(1<<i))>=k)r2++;
    r3 = ((findXOR(r2-1))<<i)+((r2+1)%2)*k;
 
    l2 = (l-1)>>i;
    if(((l-1)%(1<<i))>=k)l2++;
    l3 = ((findXOR(l2-1))<<i)+((l2+1)%2)*k;
    cout<< (r1 ^ l1 ^ r3 ^ l3)<<endl;

    // int l, r, ii, k;
    // cin>>l>>r>>ii>>k;
    // int ans = findXOR(r) ^ findXOR(l-1);
    // int temp = findXOR(r>>ii) ^ findXOR((l-1)>>ii);
    // temp = (temp<<ii) + k;
    // cout<<(ans^temp)<<nl;

}

signed main()
{
    fast_io

    // int ans = 0;
    // for(int i=2; i<=28; i++){
    //     if(i%(8) == 7) {cout<<i<<" "; continue;}
    //     ans ^= i;
    // }
    // cout<<nl<<ans<<nl;
    test
    
    //cout<<"\n";
    return 0;
}