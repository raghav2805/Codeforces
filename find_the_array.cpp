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
    int n;
    cin>>n;

    vi v;
    input(v,n);

    vi l(n);
    vi k(n);
    int smm1=0,smm2=0;

    rep(i,0,n){
        if(i%2==0){
            l[i] = v[i];
            smm1 += v[i];
        }
        else{
            l[i] = 1;
        }
    }    

    rep(i,0,n){
        if(i%2==1){
            k[i] = v[i];
            smm2 += v[i];
        }
        else
        {
            k[i] = 1;
        }
    }

    int smm = smm1+smm2;

    if(smm - smm1 < smm/2){
        rep(i,0,n){
            cout<<l[i]<<" "; 
        }
        cout<<endl;
        return ;
    }

    rep(i,0,n){
        cout<<k[i]<<" ";
    }
    cout<<endl;
    
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
