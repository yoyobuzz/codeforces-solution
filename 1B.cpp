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

    string s;
    cin>>s;
    int n = s.size();
    if(s[0]=='R' && s[s.find('C')-1] >= '0' && s[s.find('C')-1] <= '9'){
        int r = s.find('C');
        int row = stoi(s.substr(1,r-1));
        int col = stoi(s.substr(r+1));
        string col_str = "";
        while(col){
            col_str = char('A'+(col-1)%26) + col_str;
            col = (col-1)/26;
        }
        cout<<col_str<<row<<nl;
    }else{
        int i = 0;
        while(s[i]>='A' && s[i]<='Z'){
            i++;
        }
        int row = stoi(s.substr(i));
        int col = 0;
        for(int j=0;j<i;j++){
            col = col*26 + s[j]-'A'+1;
        }
        cout<<"R"<<row<<"C"<<col<<nl;
    }

}

signed main(){
    // fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}