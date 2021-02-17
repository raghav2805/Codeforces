#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
    int n;
    cin>>n;

    int arr[n];
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
        v[i]=arr[i];
    }

    sort(v.begin(),v.end());

    int pre[n];
    pre[0]=v[0];

    for(int i=1;i<n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }

    set<int> s;

    int l=v.back();
    s.insert(l);

    for(int i=n-2;i>=0;i--){
        auto it=upper_bound(v.begin(),v.end(),v[i]);
        int k=it-v.begin()-1;

        if(pre[k] >= l){
            l=v[k];
            s.insert(l);
        }

        // else{
        //     break;
        // }
    }

    vector<int> m;
    for(int i=0;i<n;i++){
        if(s.count(arr[i])){
            m.push_back(i+1);
        }
    }

    cout<<m.size()<<endl;
    for(auto x:m){
        cout<<x<<" ";
    }

    cout<<endl;

    return ;
}

signed  main(){
    fast;

    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
