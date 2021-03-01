
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const int INF=1e9+7;


void solve(){
    int n,u,v;
    cin>>n>>u>>v;

    int arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int ans=INT_MAX;

    for(int i=2;i<=n;i++){
        int l=abs(arr[i]-arr[i-1]);

        if(l>=2){
            ans=0;
            break;
        }

        else if(l==1){
            ans=min(ans,min(u,v));
        }
        else{
            ans=min(ans,v+min(u,v));
        }
    }

    cout<<ans<<endl;

    return ;
}

signed main(){

    fast;
    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
