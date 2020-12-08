#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 bool compose(int a,int b){
     return a>b;
 }

void solve(){

    lli a,b;
    cin>>a>>b;

    lli e1=a/2;
    lli e2=b/2;
    lli smm=0;

    smm+=(e1*e2);

    lli o1=a-a/2;
    lli o2=b-b/2;

    smm+=(o1*o2);

    cout<<smm<<endl;
    
    return ;
}

int main(){
    fast;

    int t=1;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
