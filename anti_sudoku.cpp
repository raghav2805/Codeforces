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
    int n = 9;
    vvi v(n,vi(n));

    rep(i,0,n){
        string s;
        cin>>s;
        rep(j,0,n){
            v[i][j] = s[j] - '0';
            // cout<<i<<" "<<j<<endl;
        }
    }

    int col = 0;

    for(int i=0;i<9;i+=3){
        int k = i;
        // cout<<"hey"<<endl;
        for(int j=0;j<9;j+=3){
            v[k][col+j]++;
            if(v[k][col+j] != 9){
                v[k][col+j] = v[k][col+j]%9;
            }
            k++;
        }
        col++;
    }

    rep(i,0,n){
        rep(j,0,n){
            cout<<v[i][j]<<"";
        }
        cout<<endl;
    }
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
