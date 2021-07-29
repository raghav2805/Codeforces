#include<bits/stdc++.h>
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

vector<int> dp;

void solve(){
    int n,m;
    cin>>n>>m;

    int ans = 0;

    while(n>0){
        // cout<<'l'<<endl;
        int x = n%10;
        if(m+x < 10){
            ans++;
        }
        else{
            ans+=(dp[m+x-10])%INF;
        }
        ans%=INF;
        n/=10;
    }

    cout<<ans<<endl;
}

signed main(){
    fast;

    // cout<<fixed<<setprecision(10);

    int t=1;
    cin>>t;

    dp.resize(2e5+7);

    rep(i,0,9){
        dp[i] = 2;
    }
    dp[9] = 3;

    rep(i,10,2e5+7){
        dp[i] = (dp[i-9] + dp[i-10])%INF;
    }

    // cout<<"hey"<<endl;
    while(t--){
        solve();
        // cout<<"ee"<<endl;
    }

    return 0;
}
