#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb(x) push_back(x)
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

const int INF = 1e9+7;

void solve(){
    int n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;

    int u1=u,r1=r,d1=d,l1=l;
    int f=0;

    if(u == n){
        r1--;
        l1--;
    }

    else if(u==n-1){
        if(l1>r1){
            l1--;
        }
        else{
            r1--;
        }
    }

    if(d==n){
        r1--;
        l1--;
    }

    else if(d==n-1){
        if(l1>r1){
            l1--;
        }
        else{
            r1--;
            // cout<<r1<<endl;
        }
    }

    if(l1<0 || r1<0){
        
        f=1;
    }
    // cout<<l1<<" "<<r1<<" "<<u1<<" "<<d1<<endl;
    

    if(l==n){
        u1--;
        d1--;
    }

    else if(l==n-1){
        if(u1>d1){
            u1--;
        }
        else{
            d1--;
        }
    }

    if(r==n){
        u1--;
        d1--;
    }

    else if(r==n-1){
        if(u1>d1){
            u1--;
        }
        else{
            d1--;
        }
    }


    if(u1<0 || d1<0){
        f=1;
    }

    if(f==1){
        cout<<"NO"<<endl;
        return ;
    }

    cout<<"YES"<<endl;


}

signed main(){

    fast;

    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
