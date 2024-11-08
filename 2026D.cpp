// UNSOLVED
// #include <bits/stdc++.h>

// using namespace std;

// #define fast_io std::ios::sync_with_stdio(0); cin.tie(0);
// #define int long long
// #define test int ttttt; cin>>ttttt; while(ttttt--) solve();
// #define nl "\n"
// typedef vector<int> vi;
// typedef long long ll;
// #define all(a) (a).begin(), (a).end()
// #define f(i, p, n) for(int i=p; i<n; i++)


// struct segment_tree
// {
//     vi seg;
//     int size;
//     // void init(int n){
//     //     size = 1;
//     //     while(size < n){
//     //         size *= 2;
//     //     }
//     //     seg.resize(2*size - 1, 0);
//     // }
//     void build(int lx, int rx, int x, vi &a){
//         if(lx==rx){
//             if(lx<a.size())
//                 seg[x] = a[lx];
//             return;
//         }
//         int mid = (lx + rx)/2;
//         build(lx, mid, 2*x+1, a);
//         build(mid+1, rx, 2*x+2, a);
//         seg[x] = seg[2*x+1] + seg[2*x+2];
//     }
//     void build(vi &a){
//         int n = a.size();
//         size = 1;
//         while(size < n){
//             size *= 2;
//         }
//         seg.resize(2*size - 1, 0);
//         build(0, size-1, 0, a);
//     }
//     int query(int lx, int rx, int x, int l, int r){
//         if(r < lx || l > rx){
//             return 0;
//         }
//         if(lx >= l && rx <= r){
//             return seg[x];
//         }
//         int mid = (lx+rx)/2;
//         int ans = query(lx, mid, 2*x+1, l, r);
//         ans += query(mid+1, rx, 2*x+2, l, r);
//         return ans;
//     }
//     int query(int l, int r){
//         return query(0, size-1, 0, l, r-1);
//     }

// };


// signed main()
// {
//     fast_io
    
//     int n;
//     cin>>n;
//     vi a(n);
//     for(auto &i:a) cin>>i;
//     segment_tree sa;
//     sa.build(a);

//     vi b(n, 0); // s(i, n)
//     vi num_b(n, 0);
//     for(int i=0; i<n; i++){
//         b[0] += sa.query(0, i);
//     }
//     for(int i=1; i<n; i++){
//         num_b[i] = n - i + num_b[i-1];
//         b[i] = b[i-1] - ((sa.query(i-1, i-1)) * (n-i-1));
//     }

//     segment_tree sb;
//     sa.build(b);

//     int q;
//     cin>>q;

//     for(int i = 0; i<q; i++){
        
//     }


    



//     //cout<<"\n";
//     return 0;
// }