#include<bits/stdc++.h>
using namespace std;
 
 void solve(){
    
    int n;
    cin>>n;

    int arr[n];
    map<int,pair<int,pair<int,int>>> mpp;
    bool flag=false;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;

        if(flag=false && mpp[arr[i]]>=3){
            flag=true;
            v.push_back()
        }
    }

    for(auto x:mpp){
        if(x.second>=3){

        }
    }

    return;
 }

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
