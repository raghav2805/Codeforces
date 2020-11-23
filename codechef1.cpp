#include<bits/stdc++.h>
using namespace std;
 
 void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    int cnt=0;
    int a;

    while(n--){
        int smm=0;
        for(int i=0;i<k+1;i++){
            cin>>a;
            if(i!=k)
                smm+=a;
        }
        if(smm>=m && a<=10){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return;
 }

int main(){
    
    int t=1;
    //cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
