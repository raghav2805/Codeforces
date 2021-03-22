#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define btoi(s1) stoi(s1, nullptr, 2)

void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cnt=0;

    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            cnt++;
        }
    }
        int l = pow(2,30)-1;
    vector<pair<int,pair<int,int>>> v;
    if(cnt>n/2){

        for(int i=0;i<n;i++){
            arr[i]^=l;
        }

        v.push_back({4,{1,l}});
    }

    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            v.push_back({2,{i+1,arr[i-1]-arr[i]}});
        }
    }

    cout<<v.size()<<endl;

    for(auto x:v){
        cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;
    }

    return ;
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
