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

int lcs(string X, string Y, int m, int n)
{

    int L[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[m][n];
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size(), result = m;
    for (int i = 0; i < m; i++){
        int curr = i, k = i;
        for (int j = 0; j < n; j++){
            if (a[j] == b[k]){
                k++;
                if (k == m) break;
            }
        }
        result = min(result, curr + m - k);
    }
    cout << result + n << nl;
}

// void solve(){
//     string a,b;
//     cin>>a>>b;
//     int m = a.size();
//     int n = b.size();
//     int l = lcs(a,b,m,n);
//     cout<<m+n-l<<nl;
// }

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}