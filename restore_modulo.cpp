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
    int n;
    cin>>n;

    vi v;
    input(v,n);

    if(n<=2){
        cout<<0<<endl;
        return ;
    }

    vi a;
    int mx = v[0];
    rep(i,1,n){
        mx = max(mx,v[i]);
        int c = v[i] -v[i-1];
        if(find(all(a),c) != a.end()){
            continue;
        }
        a.pb(c);
    }

    if(a.size()>2){
        cout<<-1<<endl;
        return;
    }

    if(a.size()==1){
        cout<<0<<endl;
        return ;
    }

    if(a[0] <=0 && a[1] <= 0){
        cout<<-1<<endl;
        return ;
    }

    if(a[0] >= 0 && a[1] >= 0){
        cout<<-1<<endl;
        return ;
    }

    if(a[0] > a[1]){
        swap(a[0],a[1]);
    }

    // cout<<mx<<" "<<abs(a[0])+a[1]<<endl;
    if(mx > abs(a[0])+a[1]){
        cout<<-1<<endl;
        return ;
    }

    cout<<abs(a[0])+a[1]<<" "<<a[1]<<endl;
    
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
