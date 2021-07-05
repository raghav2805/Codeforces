#include <bits/stdc++.h>
using namespace std;
#define int long long int
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

vvi graph;
vector<bool> vis;
int sz;
int n,k;

int pow(int n,int k){

    int res = 1;

    while(k>0){
        if(k&1){res = (res*n)%INF;}

        n = (n*n)%INF;
        k>>=1;
    }

    return res;
}

void dfs(int i){
    if(vis[i]){
        return ;
    }
    sz++;
    vis[i] = 1;
    for(auto x:graph[i]){
        dfs(x);
    }
}

void solve()
{
    cin>>n>>k;

    int ans = pow(n,k);

    graph.resize(n+1);
    vis.assign(n+1,false);

    rep(i,0,n-1){
        int x,y,z;
        cin>>x>>y>>z;

        if(z==0){
            graph[x].pb(y);
            graph[y].pb(x);
        }
    }

    rep(i,1,n+1){
        if(vis[i]){
            continue;
        }

        sz=0;
        dfs(i);
        ans -= pow(sz,k);
        ans += INF;
        ans %= INF;
    }

    cout<<ans<<endl;
}

signed main()
{
    // cout<<fixed<<setprecision(15);

    fast;
    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
