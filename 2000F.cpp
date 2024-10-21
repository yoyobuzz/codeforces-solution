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

bool good(int x, priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q, int k) {
    int total = 0;
    while(!q.empty()){
        pair<int, int> p = q.top();
        q.pop();
        // cout<<x<<" "<<total<<nl;
        // cout<<p.first<<" "<<p.second<<nl;
        if(p.first==1 && p.second==1){
            total+=2;
            x--;
        }else if(p.first==1 && p.second==2 || p.first==2 && p.second==1){
            total+=1;
            x--;
            q.push({1, 1});
        }else{
            x-=p.first;
            total++;
            p.second--;
            q.push({min(p.first, p.second), max(p.first, p.second)});
        }
        if(x<0)
            return false;
        if(total>=k)
            return true;
    }
    return total >= k;
}

void solve(){

    int n, k;
    cin>>n>>k;
    list<pair<int, int>> a(n);
    int mx=0;
    // priority_queue<pair<int, int>> q;
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        mx+=(x+y);
        a.push_back({min(x, y), max(x, y)});
        // a[i].first = min(x, y);
        // a[i].second = max(x, y);
    }
    if(k>mx){
        cout<<-1<<nl;
        return;
    }
    // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q(all(a));
    int total = 0;
    int x = 0;
    sort(all(a));
    int i = 0;
    while(true){
        auto [first, second] = a.front();
        a.pop_front();
        if(first+second+total>k){
            i++;
            continue;
        }
        if(first==1 && second==1){
            total+=2;
            x++;
        }else{
            x+=first;
            total++;
            second--;
            a.push_front({min(first, second), max(first, second)});
        }
        if(total>=k){
            cout<<x<<nl;
            return;
        }
    }
    // while(!q.empty()){
    //     pair<int, int> p = q.top();
    //     q.pop();
    //     // cout<<x<<" "<<total<<nl;
    //     // cout<<p.first<<" "<<p.second<<nl;
    //     if(p.first==1 && p.second==1){
    //         total+=2;
    //         x++;
    //     }else{
    //         x+=p.first;
    //         total++;
    //         p.second--;
    //         q.push({min(p.first, p.second), max(p.first, p.second)});
    //     }
    //     // if(x<0)
    //     //     return false;
    //     if(total>=k){
    //         cout<<x<<nl;
    //         return;
    //     }
    // }
    // sort(all(a));
    // cout<<good(35, q, k);
    // int l = 0, r = 1e9;
    // while(l+1<r){
    //     int mid = l + (r-l)/2;
    //     if(good(mid, q, k)){
    //         r = mid;
    //     }else{
    //         l = mid;
    //     }
    // }
    // if(l>0)
    //     cout<<r<<nl;
    // else
    //     cout<<-1<<nl;

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}