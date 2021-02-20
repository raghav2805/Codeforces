#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve(){
    int n;
    cin>>n;

    int arr[n];
    int smm=0,smm_odd=0,smm_even=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        smm+=arr[i];

        if(i%2==0){
            smm_even+=arr[i];
        }
        else{
            smm_odd+=arr[i];
        }
    }
    
    int k;

    if(smm_odd > smm_even)
    {
        k=smm_even;

        for(int i=0;i<n;i++){
            if(i%2==1){
                cout<<arr[i]<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
    }
    else{
        k=smm_odd;
        for(int i=0;i<n;i++){
            if(i%2==1){
                cout<<1<<" ";
            }
            else{
                cout<<arr[i]<<" ";
            }
        }
    }


    cout<<endl;
    return ;
}
signed main(){

    fast;
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
