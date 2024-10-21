#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
#define int long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
#define aint(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

void solve() {
    int n;
    cin >> n;
    vi a(n+1, 0);
    f(i, 0, n) cin >> a[i+1];
    vi freq(n+1, 0), pos(n+1, -1);
    vector<vi> temp(n+1);
    int j = INT_MAX;
    f(i, 1, n+1) {
        pos[a[i]] = i;
        temp[a[i]].push_back(i);
    }
    f(i, 1, n+1) {
        if(pos[i] != -1) {
            freq[pos[i]]++;
            if(pos[i] < j) {
                j = pos[i];
            }
        }
    }
    vi ans;
    int curr = 1;
    vi vis(n+1, 0);
    while(curr <= n) {
        if(curr == j) {
            ans.push_back(a[curr]);
            freq[pos[a[curr]]]--;
            while(!freq[j] and j<=n) {
                j++;
            }
            curr++;
            continue;
        }
        if((ans.size()-1)&1) {
            int mx = INT_MIN;
            f(i, curr, min(j, n) + 1) {
                if(!vis[i] && a[i] > mx) {
                    mx = a[i];
                }
            }
            if(mx == INT_MIN) break;
            f(i, curr, min(j, n) + 1) {
                if(a[i] == mx) {
                    curr = i + 1;
                    break;
                }
            }
            ans.push_back(mx);
            freq[pos[mx]]--;
            while(!freq[j] && j <= n) j++;
        } else {
            int mini = INT_MAX;
            f(i, curr, min(j, n) + 1) {
                if(!vis[i] && a[i] < mini) {
                    mini = a[i];
                }
            }
            if(mini == INT_MAX) break;
            f(i, curr, min(j, n) + 1) {
                if(a[i] == mini) {
                    curr = i + 1;
                    break;
                }
            }
            ans.push_back(mini);
            freq[pos[mini]]--;
            while(!freq[j] && j <= n) j++;
        }
        for(auto i:temp[ans[ans.size()-1]]) {
            vis[i] = 1;
        }
    }

    cout<<ans.size()<<nl;
    for(auto i:ans) {
        cout<<i<<" ";
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