
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb(x) push_back(x)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;
int vis[10000000 + 7] ;

int number(int a)
{

    int num = 1;

    int cnt = 0;
    while (a % 2 == 0)
    {
        cnt++;
        a /= 2;
    }
    if (cnt % 2)
    {
        num *= 2;
    }

    for (int i = 3; i <= sqrt(a); i += 2)
    {
        cnt = 0;
        while (a % i == 0)
        {
            cnt++;
            a /= i;
        }
        if (cnt % 2)
        {
            num *= i;
        }
    }

    if (a > 2)
    {
        num *= a;
    }

    if (num == 1)
    {
        return 0;
    }

    return num;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    map<int, pair<int, int>> mpp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int k = mpp[arr[i]].first;
        mpp[arr[i]] = {k + 1, 0};
    }

    int a[n];

    int mm[n];
    for (int i = 0; i < n; i++)
    {

        if (mpp[arr[i]].first > 1 && vis[arr[i]] == 1)
        {
            mm[i] = mpp[arr[i]].second;
            continue;
        }

        vis[arr[i]] = 1;
        int k = number(arr[i]);
        mm[i] = k;
        mpp[arr[i]].second = k;
    }

    unordered_map<int, int> m;
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        if (m[mm[i]] == 0)
        {
            m[mm[i]]++;
        }
        else
        {
            cnt++;

            m.clear();
            m[mm[i]]++;
        }
    }

    cout << cnt << endl;

    return;
}

signed main()
{

    // cout<<fixed<<setprecision(15);

    fast;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
