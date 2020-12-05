#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 bool compose(int a,int b){
     return a>b;
 }

 void solve(){
    
    lli n;
    cin>>n;

    int arr[12];
    for(int i=0;i<12;i++){
        cin>>arr[i];
    }

    sort(arr,arr+12,compose);

    if(n==0){
        cout<<"0"<<endl;
        return ;
    }

    lli ans=0;
    
    for(int i=0;i<12;i++){
        
            ans++;
            n-=arr[i];
        
        if(n<=0){
            break;
        }
    }
    if(n<=0)
    cout<<ans<<endl;

    else{
        cout<<"-1"<<endl;
    }
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
