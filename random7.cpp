#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 bool compose(int a,int b){
     return a>b;
 }

 void solve(){
    
    lli n,m;
    cin>>n>>m;

    lli ans=0;

    for(int i=0;i<=1000;i++){
        for(int j=0;j<=1000;j++){
            int q=i*i;
            int w=j*j;
            
            if(q +j == n && w+i == m){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    return;
 }

int main(){
    fast;

    int t=1;
    //cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
