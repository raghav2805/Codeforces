
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

vi prime;

void seive()
{
    vector<bool> vis(INF, false);

    vis[0] = true;
    vis[1] = true;
    int p = 2;

    while (p * p <= INF)
    {
        if (!vis[p])
        {

            for (int i = p * p; i <= INF; i += p)
            {
                vis[i] = true;
            }
        }
        p++;
    }

    for (int i = 0; i < INF; i++)
    {
        if (!vis[i])
            prime.pb(i);
    }
}

int n;

void cp(vi &v){

    rep(i,0,n){
        if(i%2==0){
            swap(v[i],v[i+1]);
        }
    }

}

void cr(vi &v){
    rep(i,0,n/2){
        swap(v[i],v[i+n/2]);
    }
}


void solve()
{
    cin>>n;
    n*=2;

    vi v(n);
    rep(i,0,n){cin>>v[i];}
    vi q(all(v));
    sort(all(q));

    vi t(all(v));

    int ans1=0,ans2=0;

    int l=0,f=0;
    while(l<2*n){
        if(v == q){
            break;
        }

        if(f){cp(v);}
        else{
            cr(v);
        }
        ans1++;
        f^=1;
        l++;
    }

    l=0;
    f=0;
    while(l<2*n){
        if(t == q){
            break;
        }

        if(f){cr(t);}
        else{cp(t);}
        ans2++;
        f^=1;
        l++;
    }

    int mnn = min(ans1,ans2);
    if(mnn == 2*n){
        cout<<-1<<endl;
    }
    else{
        cout<<mnn<<endl;
    }
    
}

signed main()
{
    fast;

    // cout<<fixed<<setprecision(10);

    int t = 1;
    // cin >> t;
    // seive();

    while (t--)
    {
        solve();
    }
}
