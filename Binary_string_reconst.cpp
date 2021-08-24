#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define ld long double
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define xx first
#define yy second

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

typedef vector<bool> vb;
typedef vector<string> vs;
typedef priority_queue<int> pqmax;
typedef priority_queue<int, vector<int>, greater<int>> pqmin;
typedef map<int, int> mii;

template <typename T>
void input(vector<T> &v, int n)
{
    T x;
    rep(i, 0, n)
    {
        cin >> x;
        v.pb(x);
    }
}

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    int x;
    cin >> x;

    string v(n,'0');

    vector<bool> vis(n, false);

    rep(i, 0, n)
    {
        if (s[i] == '1')
        {
            if(i-x >=0 && v[i-x] == '1'){
                continue;
            }

            if (i - x >= 0 && vis[i-x] ==false)
            {
                v[i-x] = '1';
                vis[i-x] = true;
            }
            else if (i + x < n)
            {
                v[i+x] = '1';
                vis[i+x] = true;
            }
            else{
                cout<<-1<<endl;
                return ;
            }
        }

        else{
            if(i-x >=0 && v[i-x] == '1'){
                cout<<-1<<endl;
                return ;
            }
            if(i-x>=0)vis[i-x] =true;
            if(i+x<n)vis[i+x] = true;

        }
    }

    cout<<v<<endl;
}

signed main()
{
    fast;

    // cout<<fixed<<setprecision(10);
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
