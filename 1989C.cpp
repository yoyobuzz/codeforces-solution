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
    vi x(n),y(n);
    int a=0,b=0,add=0, sub=0;
    f(i,0,n){
        cin>>x[i];
    }
    f(i,0,n){
        cin>>y[i];
    }
    f(i,0,n){
        if(x[i]==1 && y[i]!=1){
            a++;
        }else if(x[i]!=1 && y[i]==1){
            b++;
        }else if(x[i]==1 && y[i]==1){
            add++;
        }else if(x[i]==-1 && y[i]==-1){
            sub++;
        }
        // cout<<a<<" "<<b<<" "<<add<<" "<<sub<<"\n";

    }

    // int d

    // int base = min(a,b+add-sub);
    // a-=base;
    // b-=base;




    if(a>b){
        swap(a,b);
    }



    int dif = b-a;

    if(add>=dif){
        a+=dif;
        add-=dif;
    }
    dif = b-a;
    if(sub>=dif){
        b-=dif;
        sub-=dif;
    }
    dif = b-a;
    // cout<<a<<" "<<b<<" "<<add<<" "<<sub<<"\n";
    int tie = (add-sub)/2;
    int ans = min(a,b)+tie;
    if(tie<0){
        ans--;
    }
    cout<<ans<<"\n";
    // if(tie%2==0){
        
    //     return;
    // }else{
    //     cout<<min(a,b)+(tie)/2<<"\n";
    //     return;
    // }
    // int ans = min(a,b);
    // cout<<ans<<"\n";



    // if(dif<=add){
    //     a+=dif;
    //     add-=dif;
    // }else{
    //     a+=add;
    //     add=0;
    // }
    // // dif = b-a;
    // if(add>0){
    //     int tie = add+sub;
    //     int ans = a+tie/2;
    //     if(tie<0){
    //         ans--;
    //     }
    //     cout<<ans<<"\n";
    // }else{
    //     dif = b-a;
    //     if(dif<=-1*sub){
    //         b-=dif;
    //         sub+=dif;
    //     }else{
    //         b+=sub;
    //         sub=0;
    //     }
    //     int tie = add+sub;
    //     int ans = b+tie/2;
    //     if(tie<0){
    //         ans--;
    //     }
    //     cout<<ans<<"\n";
    // }

    return;
    // if(a+add<=b+sub){
    //     cout<<a+add<<"\n";
    //     return;
    // }else{
    //     if(a+add<=b){
    //         a+=add;
    //         int dif = b-a;
    //         b = b-dif;
    //         sub = sub+dif;

    //     }
    //     // cout<<(a+b+add+sub)<<"l\n";

    //     // cout<<(a+b+add+sub)/2<<"l\n";
    //     // return;
    // }


    // int score_tie = add+sub;
    // int diff = abs(a-b);
    // // cout<<a<<" "<<b<<" "<<score_tie<<"\n";
    // if(diff>=score_tie && score_tie>=0){
    //     cout<<min(a,b)+score_tie<<"\n";
    // }else if(diff>=score_tie && score_tie<0){
        
    // }else{
    //     // if(score_tie<0){
    //     //     cout<<max(a,b)+score_tie/2-1<<"\n";
    //     //     return;
    //     // }
    //     score_tie-=diff;

    //     cout<<max(a,b)+score_tie/2<<"\n";
    // }
}

signed main()
{
    fast_io
    // cout<<-1/2<<"\n";
    test
    
    //cout<<"\n";
    return 0;
}