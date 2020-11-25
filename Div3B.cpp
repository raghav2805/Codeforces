
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define vi vector<int>

void solve(){

    int n;
    cin>>n;

    int arr[n+1]={0};
    pair<bool,int> vis[n+1];

    for(int i=0;i<=n;i++){
        vis[i]={false,-1};
    }

    int mnn=INT_MAX;

    for(int i=1;i<=n;i++){
        int a;
        cin>>a;

        arr[a]++;

        if(arr[a]>1){
            vis[a]={false,-1};
        }
        else{
            vis[a]={true,i};    
        }
    }

    int ans=-1;

    for(int i=1;i<=n;i++){
        if(vis[i].first==true){
            ans=vis[i].second;
            break;
        }
    }

    cout<<ans<<endl;

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
