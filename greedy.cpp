
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


int main(){
    fastio;
    
    int n;
    cin>>n;

    string s,t;
    cin>>s;
    cin>>t;

    int ans=0;

    for(int i=0;i<n;i++){
        int a=0;

        if(s[i]!=t[i]){
            if(s[i]>t[i]){
                a=26-(s[i]-t[i]);
                a=(a/13) + (a%13);

            }
            else{
                a=t[i]-s[i];
                a=(a/13) + (a%13);
            }

            ans+=a;
        }
    }

    cout<<ans;

    return 0;
}
