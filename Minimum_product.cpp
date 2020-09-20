
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

        while(t--){
            long long a,b,x,y,n,ans=1e18;
            cin>>a>>b>>x>>y>>n;

            for(int i=0;i<2;i++){
                long long da=min(n,a-x);
                long long db=min(n-da,b-y);

                ans=min(ans,(a-da)*(b-db)*1LL );

                swap(a,b);
                swap(x,y);
            }

            cout<<ans<<endl;
        }
    return 0;
}
