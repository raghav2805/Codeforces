#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve()
{

    int n, m;
    cin >> n >> m;

    int k[n], c[m];

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
        k[i]--;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }

    bool vis[m];
    memset(vis, false, m);

    sort(k, k + n);

    int smm = 0;
    int j = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        bool flag = false;

        if (j<k[i]) 
        {
            vis[j] = true;
            smm += c[j];
            j++;
            // cout<<smm<<endl;
            flag = true;
        }

        if (flag == false)
        {
            smm += c[k[i]];
            // cout<<smm<<endl;
        }
    }

    cout << smm << endl;

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
