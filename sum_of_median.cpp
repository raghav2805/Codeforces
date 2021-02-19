#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){

    int n;
    cin>>n;

    int x[n],y[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        x[i]=a;
        y[i]=b;
    }

    sort(x,x+n);
    sort(y,y+n);

    if(n%2){
        cout<<1<<endl;
    }

    else{
        cout<< (x[n/2] - x[n/2-1]+1) * (y[n/2] - y[n/2-1] +1)<<endl;
    }

    return ; 
}
signed main(){
    fast;

    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
