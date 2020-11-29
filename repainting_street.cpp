#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define pb push_back
#define vi vector<int>
 
void solve(){
   
    int n,k;
    cin>>n>>k;
 
    int arr[n];
    map<int,int> mpp;
 
    int mxx=0;
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
 
    }
 
    mxx=INT_MAX;
 
    for(auto x:mpp){
        int a=x.first;
        int cnt=0,ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=a){
                cnt++;
                i+=k-1;
            }
        }
 
        //cout<<cnt<<" "<<a<<endl;
        mxx=min(mxx,cnt);
    }
 
    cout<<mxx<<endl;
    
    return;
}
 
int main(){
    fast;
 
    int t;
    cin>>t;
 
    while(t--){
        solve();
    }
    return 0;
}
