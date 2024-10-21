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


string DecimalToBinary(int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1  
    }    
      return str;
}

void solve(){

    int x,y;
    cin>>x>>y;
    string a = DecimalToBinary(x);
    string b = DecimalToBinary(y);
    if(a.length()<b.length()){
        while(a.length()<b.length()){
            a = a + '0';
        }
    }
    else if(b.length()<a.length()){
        while(b.length()<a.length()){
            b = b + '0';
        }
    }
    cout<<a<<" "<<b<<nl;
    string temp;
    for(int i=0; i<a.length(); i++){
        if(a[i]==b[i]){
            temp+='1';
        }
        else{
            temp+='0';
        }
    }
    int ans = 0;
    int count = 0;
    if(temp[0]=='1') count++;
    f(i, 1, temp.length()){
        if(temp[i]=='1' && temp[i-1]=='1'){
            count++;
        }else{
            break;
            // count = 0;
        }
        ans = max(count,ans);
    }

    cout<<(int)pow(2,count)<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}