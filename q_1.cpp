
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main(){
    fastio;

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int arr[n][m];

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        string s;
        cin>>s;

        int p,q;
        cin>>p>>q;

        int r=0,w=0,e=min(p,q),ans=0;
        if(s[0]!arr[0][0]){
            ans+=e;
        }

        for(int i=1;i<n+m-1;i++){
            if(arr[r+1][w]==s[i]){
                r+=1;
               
            }

            else if(arr[q][w+1]==s[i]){
                w+=1;
                
            }
            else{
                ans+=e;
            }

        }
        cout<<ans<<endl;
    }
	
	return 0;
}
