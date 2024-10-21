//not solved


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

bool check(string a, string b, string s){
    return a==s || b==s;
}

void solve(){

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string s_rev = s;
    reverse(all(s_rev));
    string a,b;
    char c = '0';
    char d = '1';
    bool flag = 0;
    int count = 0;
    f(i,0,n){
        count++;
        if(flag){
            a+=c;
            b+=d;
        }else{
            a+=d;
            b+=c;
        }
        if(count==k){
            flag = !flag;
            count = 0;
        }
    }
    int count_1 = 0, count_0 = 0;
    f(i,0,n){
        if(s[i]=='1') count_1++;
        else count_0++;
    }
    if(count_1%k!=0 || count_0%k!=0){
        cout<<-1<<nl;
        return;
    }
    if(abs(count_1/k - count_0/k)!=0 && abs(count_1/k - count_0/k)!=1){
        cout<<-1<<nl;
        return;
    }
    for(int i=0; i<n; i++){     
        string temp = s.substr(i+1) + s_rev.substr(n - i - 1);
        // string temp;
        // temp.reserve(n);
        // temp.append(s.begin() + i + 1, s.end());
        // temp.append(s_rev.end() - (i + 1), s_rev.end());
        if(check(a,b,temp)){
            cout<<i+1<<nl;
            return;
        }
    }
    cout<<-1<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}