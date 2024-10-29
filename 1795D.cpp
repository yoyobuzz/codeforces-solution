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

const int mod = 998244353;

int power(int x, int y){
    if (y == 0)
        return 1;
    int M = mod;
    int p = power(x, y / 2) % M;
    p = (p * p) % M;
    return (y % 2 == 0) ? p : (x * p) % M;
}

int modInverse(int A){
    return power(A, mod - 2);
}


signed main()
{
    fast_io
    
    int n;
    cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;

    int ans = 1;
    for(int i=0; i<n; i+=3){
        int temp = 1;
        sort(a.begin()+i, a.begin()+i+3);
        if(a[i] == a[i+1]){
            temp++;
            if(a[i+1] == a[i+2]){
                temp++;
            }
        }
        // cout<<temp<<" ";
        ans = ans * temp;
        ans %= mod;
    }
    int temp = n/3;
    int ans1 = 1, resi = 1;
    for(int i=temp; i>temp/2; i--){
        ans1 *= i;
        ans1 %= mod;
    }
    for(int i=temp/2; i>0; i--){
        ans1 *= modInverse(i);
        ans1 %= mod;
    }
    cout<<(ans*ans1)%mod<<nl;
    
    //cout<<"\n";
    return 0;
}