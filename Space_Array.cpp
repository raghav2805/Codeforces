
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;

    int arr[n+1];
    arr[0] = INT_MIN;

    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n+1);

    int cnt=0;

    for(int i=1;i<=n;i++){
        int s = i - arr[i];
        if(s>=0){
            cnt+=s;
        }
        else{
            cout<<"Second"<<endl;
            return ;
        }
        
    }

        if(cnt%2){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    

    
    
    return;
}

signed main()
{

    // cout<<fixed<<setprecision(12);

    fast;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
