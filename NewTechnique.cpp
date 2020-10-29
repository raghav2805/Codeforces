
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int
const int mod=1e9+7;

int main(){
    fast;

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int row[n*m+1] , col[n*m+1],arr[n*m+1][n*m+1];

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int a;cin>>a;
                col[a]=j;
            }
        }

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                int a;
                cin>>a;
                row[a]=j;
            }
        }

        for(int i=1;i<=n*m;i++){
            arr[row[i]][col[i]]=i;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;

}

