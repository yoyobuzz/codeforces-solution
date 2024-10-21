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


vector<int> sieveee((int)1e7+1, -1);

void sieve() {
    sieveee[0] = 0;
    sieveee[1] = 1;
    
    for (int i = 2; i < sieveee.size(); i += 2)
        sieveee[i] = 0;

    int count = 1;
    for (int i = 3; i < sieveee.size(); i++) {
        if (sieveee[i] == -1) {
            count++;
            // if (i == 3)
            //     count = 2;
            for (int j = i; j < sieveee.size(); j += i) {
                if (sieveee[j] == -1)
                    sieveee[j] = count;
            }
        }
        // if (sieveee[i] == -1)
        //     sieveee[i] = count++;
        // count++;
    }

    // for (auto i : sieveee)
    //     cout << i << '\n';
}

void solve(){

    int n;
    cin>>n;
    vi a(n);
    int ans = 0;
    f(i, 0, n){
        cin>>a[i];
        ans^=sieveee[a[i]];
    }
    if(!ans)
        cout<<"Bob"<<nl;
    else
        cout<<"Alice"<<nl;
}

signed main()
{
    fast_io

    sieve();
    
    test

    //cout<<"\n";
    return 0;
}