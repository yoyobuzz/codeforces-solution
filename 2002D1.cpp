#include <bits/stdc++.h>

using namespace std;

#define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// #define int long long
#define test int ttttt; cin>>ttttt; while(ttttt--) solve();
#define nl "\n"
typedef vector<int> vi;
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define f(i, p, n) for(int i=p; i<n; i++)

bool dfs(int v, int &i, vector<vector<int>> &adj, vector<int> &p) {
    // cout<<1<<nl;
    if(v != p[i])
        return false;
    // cout<<2<<nl;
    if(adj[v].size() == 0)
        return true;  
    // cout<<3<<nl;
    if(adj[v][0]==p[i+1]){
        // cout<<v<<" "<<adj[v][0]<<" "<<adj[v][1]<<nl;
        bool b1 = dfs(adj[v][0], ++i, adj, p);
        bool b2 = dfs(adj[v][1], ++i, adj, p);
        return b1 & b2;
        // return dfs(adj[v][0], ++i, adj, p) & dfs(adj[v][1], ++i, adj, p);
    }else if(adj[v][1]==p[i+1]){
        // cout<<v<<" "<<adj[v][0]<<" "<<adj[v][1]<<nl;
        bool b1 = dfs(adj[v][1], ++i, adj, p);
        bool b2 = dfs(adj[v][0], ++i, adj, p);
        return b1 & b2;
        // return dfs(adj[v][1], ++i, adj, p) & dfs(adj[v][0], ++i, adj, p);
    }else{
        // cout<<v<<" "<<adj[v][0]<<" "<<adj[v][1]<<nl;
        // cout<<v<<" "<<p[i]<<nl;
        // cout<<4<<nl;
        return false;
    }
}

bool dfs_iterative(int start, int i, vector<vector<int>> &adj, vector<int> &p, vector<stack<int>> &rec_state, int &past) {
    stack<int> s;   
    if(i<0)
        i=0;
    if(i==0 && start==0)
        s.push(start);
    else
        s = rec_state[i];
    while (!s.empty()) {
        rec_state[i] = s;
        auto v = s.top();
        s.pop();
        if (v != p[i++]) {
            past = i-1;
            return false;
        }
        if (adj[v].empty()) {
            continue;
        }
        if (adj[v][0] == p[i]) {
            s.push(adj[v][1]);
            s.push(adj[v][0]);
        } else if (adj[v][1] == p[i]) {
            s.push(adj[v][0]);
            s.push(adj[v][1]);
        } else {
            past = i-1;
            return false;
        }
    }
    return true;
}


void solve(){

    int n, q;
    cin>>n>>q;
    vector<vector<int>> adj(n);
    vector<int> par(n);
    for(int i = 1; i<n; i++){
        // int x = 0;
        // cin>>x;
        cin>>par[i];
        par[i]--;
        adj[par[i]].push_back(i);
    }
    // for(auto a: adj){
    //     for(auto b: a){
    //         cout<<b<<" ";
    //     }
    //     cout<<nl;
    // }
    vi p(n, 0);
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        p[i] = x-1;
    }
    // int t = 0;
    // if(dfs(0, t, adj, p)){
    //     cout<<"YES\n";
    // }else {
    //     cout<<"NO\n";
    // }
    vector<stack<int>> rec_state(n);
    bool past = false;
    int past_curr = 0;
    for(int i = 0; i<q; i++){
        int x, y;
        cin>>x>>y;
        x--; y--;
        swap(p[x], p[y]);
        if(p[0]!=0){
            past=false;
            cout<<"NO\n";
            continue;
        }
        if(past){
            if(par[p[x]]!=par[p[y]]){
                past = false;
                cout<<"NO\n";
                continue;
            }
            if(dfs_iterative(-1, min(x, y)-1, adj, p, rec_state, past_curr)){
                past = true;
                cout<<"YES\n";
            }else {
                past = false;
                cout<<"NO\n";
            }
        }else{
            if(dfs_iterative(0, min({x-1, y-1, past_curr}), adj, p, rec_state, past_curr)){
                past = true;
                cout<<"YES\n";
            }else {
                past = false;
                cout<<"NO\n";
            }
        }

        // if(dfs_iterative(0, 0, adj, p, rec_state)){
        //     past = true;
        //     cout<<"YES\n";
        // }else {
        //     past = false;
        //     cout<<"NO\n";
        // }
        
        // int t = 0;
        // if(dfs(0, t, adj, p)){
        //     past = true;
        //     cout<<"YES\n";
        // }else {
        //     past = false;
        //     cout<<"NO\n";
        // }




    }

}

signed main()
{
    fast_io
    
    test
    
    //cout<<"\n";
    return 0;
}