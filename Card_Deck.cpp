    #include <bits/stdc++.h>
    using namespace std;
    #define int long long int
    #define fast                          \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0)

    void solve()
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back({a, i});
        }

        vector<pair<int, int>> m(v);

        sort(v.rbegin(), v.rend());

        bool visited[n + 1];
        memset(visited, false, n + 1);

        for (int i = 0; i < n; i++)
        {
            if (visited[0] == true)
            {
                break;
            }
            // cout<<v[i].second<<endl;
            for (int j = v[i].second; j < n; j++)
            {
                if (visited[j] == true)
                {
                    break;
                }
                cout << m[j].first << " ";
                visited[m[j].second] = true;
            }
        }
        cout << endl;
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
