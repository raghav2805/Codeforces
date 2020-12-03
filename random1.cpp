
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve(){

    lli n;
    cin>>n;

    lli arr[7];
    lli smm=0;
    for(int i=0;i<7;i++){
        cin>>arr[i];
        
    }

    int i=0;
    while(smm<n){
        i=i%7;
        smm+=arr[i];
        i++;
    }

    cout<<i<<endl;
    
    return;
}

int main()
{
    fast;

    int t=1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
