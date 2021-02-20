#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const int INF=1e9+7;

void solve(){

    int n;
    cin>>n;

    int mnn=100000,mxx=-10000;

    unordered_map<int,int> mpp;

    for(int i=0;i<n;i++){
       int a;
       cin>>a;

        mpp[a]++;
    }

    vector<int> v;
    for(auto x:mpp){
        v.push_back(x.second);
    }

    int ans=INF;

    sort(v.begin(),v.end());

    for(auto c:v){
        int it1=lower_bound(v.begin(),v.end(),c) - v.begin();
        int k=v.size()- it1;
        ans=min(ans, n - c* k);
    }

    cout<<ans<<endl;
    
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
