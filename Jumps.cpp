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

vector<int> dp(1000005,-1);

void solve()
{
   int n;
   cin>>n;

   cout<<dp[n]<<endl;

   
}

signed main()
{

    // cout<<fixed<<setprecision(15);
    fast;
    int t = 1;
    cin >> t;

    for(int i=1;i<1000000 && (i*(i+1))/2 < 1000005;i++){
        dp[(i*(i+1))/2] = i;
        if(i>=3){
            dp[(i*(i+1))/2 - 1] = i+1;
        }
    }
    dp[2]=3;

    int f=0;

    for(int i=1;i<1000005;i++){
        if(dp[i]==-1 && f==0){
            dp[i] = dp[i-1] + 1;
            f=1;
        }

        else if(dp[i] == -1 && f==1){
            dp[i] = dp[i-1];
        }

        else if(dp[i] != -1){
            f=0;
        }
    }

    while (t--)
    {
        solve();
    
    }

    return 0;
}
