#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb(x) push_back(x)
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve(){

    int n,q,k;
    cin>>n>>q>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int v[n];
    v[0] = arr[1]-1 -1;

    for(int i=1;i<n-1;i++){
        v[i] = arr[i+1] - arr[i-1] - 1 -1;
    }

    v[n-1] = k - arr[n-2] -1;


    int pre[n];
    pre[0] = v[0];

    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] + v[i];
    }

    // for(int i=0;i<n;i++){
    //     cout<<pre[i]<<endl;
    // }

    while(q--){
        int l,r;
        cin>>l>>r;

        l--;
        r--;
        int ans=0;

        if(l==r){
            cout<<k-1<<endl;continue;
        }

        if(l==0){
            ans += pre[r-1];
            ans += k - arr[r-1] -1;
        }
        else{
            ans += arr[l+1] -1 -1;
            ans += pre[r-1] -pre[l];
            ans += k- arr[r-1] -1;
        }

        cout<<ans<<endl;

    }


    return ;
}

signed main()
{

    fast;
    int t=1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
