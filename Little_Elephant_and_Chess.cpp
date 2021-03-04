
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve()
{

    string s[8];
    for(int i=0;i<8;i++){
        cin>>s[i];
    }

    for(int i=0;i<8;i++)
    {
        for(int j=1;j<8;j++){
            if(s[i][j] == s[i][j-1]){
                cout<<"NO"<<endl;
                return ;
            }
        }
    }

    cout<<"YES"<<endl;
    return ;
}

signed main()
{

    fast;
    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}
