#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
    
    int a,b,k;
    cin>>a>>b>>k;

    int a1[k],b1[k];
    
    unordered_map<int,int> mpp1;
    unordered_map<int,int> mpp2;

    for(int i=0;i<k;i++){
        cin>>a1[i];

        mpp1[a1[i]]++;
    }

    for(int i=0;i<k;i++){
        cin>>b1[i];
        mpp2[b1[i]]++;

    }
    int smm1=0,smm2=0;

    for(auto x:mpp1){
        if(x.second>1){
            // cout<<x.first<<endl;
            smm1+= ( (x.second) * (x.second -1) )/2;
        }
    }

    for(auto x:mpp2){
        if(x.second>1){
            smm2+= ( (x.second) * (x.second -1) )/2;
        }
    }

    int f= k*(k-1)/2;

    // cout<<f<<" "<<smm1<<" "<<smm2<<endl;

    cout<<f-smm1-smm2<<endl;

    return;
   
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
