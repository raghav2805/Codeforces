#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
    
    int n,k;
    cin>>n>>k;

    if(n>k){
        int m=ceil((double)n/k);
       
        k*=m;
    }
    // cout<<k<<" "<<n<<endl;

    int j=ceil((double)k/n);
   
    cout<<j<<endl;

    return;
}

signed main()
{
    fast;

    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
    return 0;
}
