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

// bool prime[2000001 + 1];

// void SieveOfEratosthenes(int n)
// {
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= n; p++) {
//         if (prime[p] == true) {
//             for (int i = p * p; i <= n; i += p){
//                 prime[i] = false;
//             }
//         }
//     }
// }

// vector<int> greedyColoring(const vector<vector<int> >& graph)
// {
//     int n = graph.size();
//     vector<int> colors(n, -1);
//     for (int v = 0; v < n; ++v) {
//         unordered_set<int> usedColors;
//         for (int neighbor : graph[v]) {
//             if (colors[neighbor] != -1) {
//                 usedColors.insert(colors[neighbor]);
//             }
//         }
//         for (int color = 1;; ++color) {
//             if (usedColors.find(color)==usedColors.end()) {
//                 colors[v] = color;
//                 break;
//             }
//         }
//     }
//     return colors;
// }
void solve(){

    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1\n1\n";
        return;
    }
    else if(n==2)
    {
        cout<<"2\n1 2\n";
        return;
    }
    else if(n==3)
    {
        cout<<"2\n1 2 2\n";
        return;
    }
    else if(n==4)
    {
        cout<<"3\n1 2 2 3\n";
        return;
    }
    else if(n==5)
    {
        cout<<"3\n1 2 2 3 3\n";
        return;
    }
    else if(n==6)
    {
        cout<<"4\n1 2 2 3 3 4\n";
        return;
    }
    cout<<4<<"\n";
    f(i,1,n+1){
        if(i%4==0)
            cout<<4<<" ";
        else
            cout<<i%4<<" ";
    }
    cout<<nl;
    // vector<vector<int>> graph(n);
    // for (int u = 0; u < n; u++) {
    //     for (int v = u + 1; v < n; v++) {
    //         if (prime[((u+1) ^ (v+1))]) {
    //             graph[u].emplace_back(v+1);
    //             graph[v].emplace_back(u+1);
    //             // cout<<u+1<<" "<<v+1<<nl;
    //         }
    //     }
    // }
    // int co = 1;
    // for(auto i:graph){
    //     cout<<co++<<": ";
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<nl;
    // }
    // vector<int> colors = greedyColoring(graph);
    
    // cout<<*max_element(all(colors))<<nl;
    // for(auto i:colors){
    //     cout<<i<<" ";
    // }

    // cout<<nl;

}

signed main()
{
    fast_io

    // SieveOfEratosthenes(2000001);
    // prime[1]=0;
    test
    
    //cout<<"\n";
    return 0;
}