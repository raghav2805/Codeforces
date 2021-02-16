#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
      int n;
    cin>>n;

    int arr[n];
    int c0=0,c1=0,c2=0;
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
        int v=arr[i]%3;
        if(v==0)c0++;
        if(v==1)c1++;
        if(v==2)c2++;
    }

      int k=n/3;

    c0-=k;
    c1-=k;
    c2-=k;
    int cnt=0;

    int mxx=max(c0,max(c1,c2));

    while(1){
        if(c0==0 && c1==0 && c2==0){
            break;
        }
        if(c0>0){
            cnt+=c0;
            c1+=c0;
            c0=0;
            // cout<<cnt<<endl;
        }

        if(c1>0){
            cnt+=c1;
            c2+=c1;
            c1=0;
        }

        if(c2>0){
            cnt+=c2;
            c0+=c2;
            c2=0;
        }

    }

    cout<<cnt<<endl;

    return ;
}

int main(){
    fast;

    lli t=1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
