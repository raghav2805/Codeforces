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

    string a;
    string b;
    cin>>a>>b;

    map<char,vi> mpp_a,mpp_b;

    rep(i,0,n){
        mpp_a[a[i]].pb(i+1);
        mpp_b[b[i]].pb(i+1);
    }

    vpii v;

    for(auto &x:mpp_a){
        if(x.first=='?'){continue;}

        while(mpp_b[x.first].size() > 0 && x.second.size()>0){
            v.pb({x.second.back(),mpp_b[x.first].back()});
            mpp_b[x.first].pop_back();
            x.second.pop_back();
        }
    }

        for(auto it = mpp_b.rbegin();it!=mpp_b.rend();it++){
            while(mpp_a['?'].size()>0 && it->second.size()>0){
                v.pb({mpp_a['?'].back(),it->second.back()});
                mpp_a['?'].pop_back();
                it->second.pop_back();
            }

        }

        for(auto it = mpp_a.rbegin();it!=mpp_a.rend();it++){
            while(mpp_b['?'].size()>0 && it->second.size()>0){
                v.pb({it->second.back(),mpp_b['?'].back()});
                it->second.pop_back();
                mpp_b['?'].pop_back();
            }
        }
    
    cout<<v.size()<<endl;

    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
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
