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

void solve(){
    int n,k;
    cin>>n>>k;

    vi v;
    input(v,k);

    vvi arr(n+1);

    rep(i,0,k){
        arr[v[i]].pb(i+1);
    }

    rep(i,1,n+1){
        if(arr[i].size()>0){
            sort(all(arr[i]));
        }
    }
    int ans = 0;

    rep(i,1,n+1){
        if(arr[i].size() == 0){
            ans += 3;
            if(i==1){
                ans--;
            }

            if(i==n){
                ans--;
            }
        }
        else{
            
            if(i-1 > 0 && arr[i-1].size()>0){
                if(arr[i-1].back() < arr[i][0]){
                    ans++;
                }
            }
            else if(i-1>0){
                ans++;
            }

            if(i+1<=n && arr[i+1].size()>0){
                if(arr[i+1].back() < arr[i][0]){
                    ans++;
                }
            }
            else if(i+1<=n){
                ans++;
            }
            
        }
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
