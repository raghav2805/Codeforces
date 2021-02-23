#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const int INF=1e9+7;

void solve(){
    
    int p,a,b,c;
    cin>>p>>a>>b>>c;

    if(p>a){
        int k1=p/a;
        if(p%a == 0){
            cout<<0<<endl;
            return ;
        }
        else{
            k1++;
            a*=k1;
        }

    }
        a=a-p;

    if(p>b){
        int k2=p/b;
        if(p%b == 0){
            cout<<0<<endl;
            return ;
        }
        else{
            k2++;
            b*=k2;
        }

    }
        b-=p;

    if(p>c){
        int k3=p/c;
        if(p%c == 0){
            cout<<0<<endl;
            return ;
        }
        else{
            k3++;
            c*=k3;
        }

    }
        c-=p;


    cout<<min(a,min(b,c))<<endl;
    
    return ;
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
