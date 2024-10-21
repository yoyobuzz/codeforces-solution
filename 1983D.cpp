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

void swap(vector<int>& arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int minSwaps(vector<int> arr, int N)
{
    int ans = 0;
    vector<int> temp = arr;
    map<int, int> h;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < N; i++) {
        h[arr[i]] = i;
    }
    for (int i = 0; i < N; i++) {
        if (arr[i] != temp[i]) {
            ans++;
            int init = arr[i];
            swap(arr, i, h[temp[i]]);
            h[init] = h[temp[i]];
            h[temp[i]] = i;
        }
    }
    return ans;
}

void solve(){

    int n;
    cin>>n;
    vi a(n), b(n);
    f(i,0,n) cin>>a[i];
    f(i,0,n) cin>>b[i];
    vi c = a, d = b;
    sort(all(c));
    sort(all(d));
    f(i,0,n){
        if(c[i]!=d[i]){
            cout<<"NO"<<nl;
            return;
        }
    }
    int ans = minSwaps(a, n) + minSwaps(b, n);
    if(ans%2==0){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}