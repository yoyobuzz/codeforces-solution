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
    string s;
    cin>>s;
    
    vector<int> temp;

    for(int i = 1; i <= 26; i++){
        if(n % i == 0) temp.push_back(n/i);
    }
    vector<pair<int, int>> freq(26, {0, 0});
    for(auto &c:s) freq[c-'a'].first++;
    for(int i = 0; i < 26; i++){
        freq[i].second = i;
    }
    sort(all(freq), greater<pair<int, int>>());
    int ans = n;
    int chosen = 1;
    for(auto x:temp){
        int count = 0;
        for(int i=0; i<n/x; i++){
            if(freq[i].first > x){
                count += x;
            }else{
                count += freq[i].first;
            }
        }
        if(ans >= n-count){
            ans = n-count;
            chosen = x;
        }
    }
    cout<<ans<<nl;
    multiset<char> spare, keep;
    for(int i=0; i<n/chosen; i++){
        while(freq[i].first < chosen){
            spare.insert(freq[i].second+'a');
            freq[i].first++;
            // cout<<char(freq[i].second+'a')<<" ";
        }
        keep.insert(freq[i].second+'a');
    }
    vi ff(26, 0);
    for(auto c:s){
        if(keep.find(c) != keep.end() && ff[c-'a']<chosen){
            ff[c-'a']++;
            cout<<c;
        }else{
            cout<<*spare.begin();
            ff[*spare.begin()-'a']++;
            spare.erase(spare.begin());
        }
    }
    cout<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}