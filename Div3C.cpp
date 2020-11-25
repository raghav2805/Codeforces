
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
    int n;
    cin>>n;

    vector<int> v[n+1];

    for(int i=1;i<=n;i++){
        int a;
        cin>>a;

        v[a].push_back(i);
    }

    int mnn[n+1];

    for(int i=1;i<=n;i++){
        if(v[i].size()!=0)
            mnn[i]=v[i].size()+1;
        else{
            mnn[i]=INT_MAX;
        }
    }

    // for(int i=1;i<=n;i++){
    //     cout<<mnn[i]<<" ";
    // }
    // cout<<endl;

    int mnn1=INT_MAX;

    for(int i=1;i<=n;i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1 ){
                mnn[i]--;
            }
            if(v[i][j]==n){
                mnn[i]--;
            }

            if(j>0){
                if(v[i][j]-v[i][j-1]==1){
                    mnn[i]--;
                }
            }
        }
        if(mnn1>mnn[i]){
            mnn1=mnn[i];
        }
    }
    // for(int i=1;i<=n;i++){
    //     cout<<mnn[i]<<" ";
    // }

    cout<<mnn1<<endl;
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
