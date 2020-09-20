#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        int arr[n],arr1[n];
 
        for(int i=0;i<n;i++){
            cin>>arr[i];
 
        }
 
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
 
        vector<int> v;
 
        for(int i=0;i<n;i++){
            if(arr1[i]!=1){
                v.push_back(arr[i]);
            }
        }
 
        sort(v.begin(),v.end(),greater<int>());
        int j=0;
 
        for(int i=0;i<n;i++){
            if(arr1[i]==1){
                cout<<arr[i]<<" ";
            }
 
            else{
                cout<<v[j++]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
