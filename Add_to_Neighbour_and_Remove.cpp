
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

 int n;
int smm=0;
int arr[100005];

bool fun(int x){

    x = n-x;
    // cout<<x<<endl;

    if(smm%x!=0)return false;

    int curr=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr==smm/x){
            curr=0;
        }
        else if(curr>smm/x){
            return false;
        }
    }

    return true;

}

void solve(){
    
    cin>>n;
    smm=0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        smm+=arr[i];
    }

    for(int i=0;i<n;i++){
        if(fun(i)){
            cout<<i<<endl;
            return ;
        }
    }

    return ;
}

signed main()
{
    // cout<<fixed<<setprecision(15);

    fast;
    int t = 1;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
