#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;

    int ans=0;
    for(int i=1;i<=n;i++){
        int x = k+1+i;
        int l = min(i,m);
        if(l%2!=0){
            ans^=x;
        }
    }

    for(int i=2;i<=m;i++){
        int x= k+n+i;
        int l = min(m-i+1,n);

        if(l%2!=0){
            ans^=x;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    fast;

    int t=1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
