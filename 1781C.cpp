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

// bool good(int x, string &s){
//     vector<int> freq(26, 0);
//     for(auto &c:s) freq[c-'a']++;
//     sort(all(freq), greater<int>());
//     int count = 0;
//     for(auto f:freq){
//         if(f==0) continue;
//         if(f>x){
//             count += (f-x);
//         }else if(f<x){
//             count -= (x-f);
//         }
//     }
//     return count>=0;
// }

// vector<vector<int>> factors;

// void precalc(){
//     factors.resize((int)1e5+1);
//     factors[1] = {1};
//     // factors[2] = {1, 2};
//     for(int i=1; i<factors.size(); i++){
//         for(int i=1; i<=26; i++){

//         }
//     }
// }


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
    sort(all(freq));
    int ans = n;
    int chosen_freq = 1;
    for(auto x:temp){
        int chars = n/x;
        int count = 0, extra = 0;
        for(int i=0; i<26; i++){
            if(freq[i].first == 0) continue;
            if(freq[i].first > x){
                // count += freq[i].first - x;
                extra += freq[i].first - x;
                // freq[i].first = x;
            }else if(freq[i].first < x){
                if(extra >= x - freq[i].first){
                    // freq[i].first = x;
                    extra -= x - freq[i].first;
                    count += x - freq[i].first;
                }else{
                    extra += freq[i].first;
                }
            }
        }
        // cout<<x<<" "<<count<<" "<<extra<<nl;
        if(ans>=count+extra){
            ans = min(ans, count+extra);
            chosen_freq = x;
        }
    
    }
    cout<<ans<<nl;
    int x = chosen_freq;
    vector<char> spare;
    int count = 0, extra = 0;
    for(int i=0; i<26; i++){
        if(freq[i].first == 0) continue;
        if(freq[i].first > x){
            extra += freq[i].first - x;
        }else if(freq[i].first < x){
            if(extra >= x - freq[i].first){
                extra -= x - freq[i].first;
                count += x - freq[i].first;
            }else{
                extra += freq[i].first;
            }
        }
    }
    sort(all(freq), [](auto &a, auto &b){
        return a.second<b.second;
    });
    int j = 0;
    for(auto c:s){
        if(freq[c-'a'].first>0) {
            cout<<c; 
            freq[c-'a'].first--;
        }
        // else{
        //     cout<<spare[j];
        //     freq[spare[j]-'a'].first = ans-1;
        //     j++;
        // }
    }
    cout<<nl;

    // int l = 1, r = n+1;
    // while (l+1<r)
    // {
    //     int mid = l + (r-l)/2;
    //     if(good(mid, s)){
    //         l = mid;
    //     }else{
    //         r = mid;
    //     }
    // }
    // vector<int> freq(26, 0);
    // for(auto &c:s) freq[c-'a']++;
    // int x = l;
    // int count = 0;
    // for(auto f:freq){
    //     if(f==0) continue;
    //     if(f>x){
    //         count += (f-x);
    //     }else if(f<x){
    //         count += (x-f);
    //     }
    // }
    // cout<<count<<nl;
    // // cout<<l<<nl;
}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}