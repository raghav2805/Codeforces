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

void solve(){
    int n,k;
    cin>>n>>k;

    if(k == 1){
        rep(i,0,n){
            cout<<'a';
        }
        cout<<endl;
        return ;
    }

    string s;
    vector<char> v;
    rep(i,0,26){
        v.pb( (char)(i + 97));
    }

    rep(i,0,k){
        rep(j,i,k){
            if(j==i){
                s.pb(v[i]);
                continue;
            }
            s.pb(v[i]);
            s.pb(v[j]);
        }
    }

    // cout<<s<<endl;
    
    if(n<s.size()){
        cout<<s.substr(0,n)<<endl;
        return ;
    }

    int l = ceil(n*1.0/s.size());

    string f = s;

    rep(i,0,l){
        rep(j,0,f.size()){
            s.pb(f[j]);
        }
    }

    cout<<s.substr(0,n)<<endl;

}

signed main()
{
    fast;

    int t=1;
    // cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
