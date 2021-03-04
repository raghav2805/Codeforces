
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

    int n;
    cin >> n;

    int arr[n];
    vector<int> neg, pos, zero;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            zero.pb(0);
        }
        else if (arr[i] < 0)
        {
            neg.pb(arr[i]);
        }
        else
        {
            pos.pb(arr[i]);
        }
    }
    cout << 1 << " " << neg[0] << endl;

    if ((neg.size() - 1) % 2 == 0)
    {

        cout << pos.size() + neg.size() - 1 << " ";

        for (int i = 1; i < neg.size(); i++)
        {
            cout << neg[i] << " ";
        }

        for (int i = 0; i < pos.size(); i++)
        {
            cout << pos[i] << " ";
        }

        cout << endl;

        cout << zero.size() << " ";
        for (int i = 0; i < zero.size(); i++)
        {
            cout << zero[i] << " ";
        }
        cout << endl;
    }

    else
    {

        cout << pos.size() + neg.size() - 2 << " ";

        if (neg.size() > 2)
        {

            for (int i = 0; i < pos.size(); i++)
            {
                cout << pos[i] << " ";
            }

            for (int i = 1; i < neg.size() - 1; i++)
            {
                cout << neg[i] << " ";
            }

            cout << endl;

            cout << zero.size() + 1 << " ";
            for (int i = 0; i < zero.size(); i++)
            {
                cout << zero[i] << " ";
            }

            for (int i = neg.size() - 1; i < neg.size(); i++)
            {
                cout << neg[i] << " ";
            }
        }

        else
        {
            for (int i = 0; i < pos.size(); i++)
            {
                cout << pos[i] << " ";
            }

            cout << endl;

            cout << zero.size() + 1 << " ";
            for (int i = 0; i < zero.size(); i++)
            {
                cout << zero[i] << " ";
            }

            for (int i = 1; i < neg.size(); i++)
            {
                cout << neg[i] << " ";
            }
        }
        cout << endl;
    }

    return;
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
