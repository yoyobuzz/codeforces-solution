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

string solve(int l, int r, int turn, int prev, int n, vi &a, vi &li, vi &ri){
    if(l == r){
        if(!turn)
            return "Alice";
        else return "Bob";
    }

    if(a[l]>prev && a[r]>prev){
    }else{
        if(a[l]>prev){
            if(li[l]&1){
                if(!turn)
                    return "Alice";
                else return "Bob";
            }else{
                if(turn)
                    return "Alice";
                else return "Bob";
            }
        }else{
            if(ri[r]&1){
                if(!turn)
                    return "Alice";
                else return "Bob";
            }else{
                if(turn)
                    return "Alice";
                else return "Bob";
            }
        }
    }

    if(a[l] <= a[r]){
        if((ri[r]&1)){
            if(!turn)
                return "Alice";
            else return "Bob";
        }else{
            return solve(l+1, r, !turn, a[l], n, a, li, ri);
        }
    }else{
        if((li[l]&1)){
            if(!turn)
                return "Alice";
            else return "Bob";
        }else{
            return solve(l, r-1, !turn, a[r], n, a, li, ri);
        }
    }
}

signed main()
{
    fast_io
    
    int n;
    cin>>n;
    vi a(n);
    for(auto &i:a) cin>>i;
    
    // if(n == 1){
    //     cout<<"Alice"<<nl;
    //     return 0;
    // }

    vi li(n, 0), ri(n, 0);
    for(int i=1; i<n; i++){
        if(a[i-1] > a[i]){
            for(int j = i-1; j >=0; j--){
                li[j] = i-j;
            }
            break;
        }
    }
    for(int i=n-2; i>=0; i--){
        if(a[i+1] > a[i]){
            for(int j = i+1; j <n; j++){
                ri[j] = j-i;
            }
            break;
        }
    }

    cout<<solve(0, n-1, 0, -1, n, a, li, ri)<<nl;

    //cout<<"\n";
    return 0;
}