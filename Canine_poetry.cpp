#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve()
{
    string s;
    cin>>s;

    int n=s.size();
    bool vis[n];
    memset(vis,false,n);
    int ans=0;

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1] && vis[i]==false && vis[i-1] == false){
            ans++;
            vis[i]=true;
        }

        if(i+1<n){
            if(s[i-1] == s[i+1] && vis[i-1]==false){
                ans++;
                vis[i+1]=true;
            }
        }
    }

    cout<<ans<<endl;

    return;
}

signed main()
{
    fast;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
