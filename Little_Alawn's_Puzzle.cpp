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
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;


typedef map<int, int> mii;


template <class T>
void input(vector<T> &v, int n)
{
    T x;
    rep(i,0,n)
    {
        cin >> x;
        v.pb(x);
    }
}

int bin(int a,int b){
    int res=1;

    while(b>0){
        if(b%2){res = (res*a)%INF;}

        a = (a*a)%INF;
        b>>=1;
    }

    return res;
}

void solve()
{
    int n;
    cin>>n;

    vi v,arr;
    input(v,n);
    input(arr,n);

    if(n==2){
        cout<<2<<endl;
        return;
    }

    vector<bool> vis(n+1,false);
    mii mpp;

    rep(i,0,n){
        mpp[v[i]] = arr[i];   
    }

    int ans=0;

    rep(i,0,n){

        if(!vis[v[i]]){
            int a = mpp[v[i]];
            int b = v[i];
            vis[a] = 1;
            vis[b] = 1;

                // cout<<a<<" "<<b<<endl;
            while(1){
                int c = mpp[a];
                vis[c] = 1;
                if(c == b){
                    // cout<<"hey "<<c<<endl;
                    ans++;
                    break;
                }

                a = c;
            }
        }
    }

    cout<<bin(2,ans)<<endl;

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
