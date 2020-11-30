
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

    lli n,m;
    cin>>n>>m;

    lli arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=ceil(float(arr[i])/m);
    }

    lli j,mxx=INT_MIN;

    for(lli i=0;i<n;i++){
        if(arr[i]>=mxx){
            mxx=arr[i];
            j=i;
        }
    }

    cout<<j+1<<endl;

    return;
}

int main(){
    fast;

    int t=1;
    //cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
