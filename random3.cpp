
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

    vector<lli> v;
    map<lli,lli> mpp;

    for(int i=0;i<n;i++){
        lli a;cin>>a;
        v.push_back(a);
        mpp[a]++;
    }

    lli mnn=INT_MAX,ans=-1;

    for(auto x:mpp){
        if(x.first<mnn){
            mnn=x.first;
            if(x.second==1)
            ans=x.first;
        }
    }

    if(ans!=-1){
    auto it=find(v.begin(),v.end(),ans);
    cout<<it-v.begin()+1<<endl;
    }

    else{
        cout<<"Still Rozdil"<<endl;
    }
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
