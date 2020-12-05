#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 void solve(){
    
    lli n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    lli m;
    cin>>m;

    int arr1[m];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }

    lli ans=0;
    lli mxx=INT_MIN;

    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--){
            int t=arr1[j]/arr[i];
            if(float((arr1[j]*1.0)/arr[i]) == t){
                if(mxx<t){
                    mxx=t;
                    ans=1;
                    break;                    
                }
                else if(t==mxx){
                    ans++;
                    break;
                }
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

/*
if(arr[j]<arr[j-1]){
            arr[j]+=n;
        }
*/
