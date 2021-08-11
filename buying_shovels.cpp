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

int factors(int n,int k){
    int l = sqrt(n);

    int ans = 0;

    rep(i,2,l+1){
        if(n%i==0){
            if(n/i <=k){
                ans = i;
                break;
            }
            else if(i<=k){
                ans = n/i;
            }
        }
    }

    return ans;
}

void solve(){
    int n,k;
    cin>>n>>k;

    if(n<=k){
        cout<<1<<endl;
        return;
    }

    int ans = factors(n,k);

    if(ans == 0){
        cout<<n<<endl;
        return;
    }

    cout<<ans<<endl;
}

signed main()
{
    fast;

    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
