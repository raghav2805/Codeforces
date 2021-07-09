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
ld ans ;

void rec(ld c,ld m,ld p,ld v,ld sno,ld z){
    if(c < 0.000001){c=0;}
    if(m < 0.000001){m=0;}
    if(c==0.0 && m==0.0){
        ans += sno*z*p;
        return ;
    }

    ans += sno*z*p;

    // cout<<ans<<endl;
    ld save_c = c,save_m = m, save_p = p;

    if(c!=0.0){
        
        if(m!=0.0){
            if(c>v){
                p+=v/2.0;
                m+=v/2.0;
                c-=v;
            }
            else
            {
                p+=c/2.0;
                m+=c/2.0;
                c=0;
            }
            
        }
        else{
            if(c>v){
                p+=v;
                c-=v;
            }
            else{
                p+=c;
                c=0;
            }
        }
        

        rec(c,m,p,v,sno+1,z*save_c);
    }

    c = save_c;
    p = save_p;
    m = save_m;

    if(m!=0.0){

        if(c!=0.0){
            if(m>v){
                p+=v/2.0;
                c+=v/2.0;
                m-=v;
            }
            else{
                p+=m/2.0;
                c+=m/2.0;
                m=0;

            }
        }
        else{
            if(m>v){
                p+=v;
                m-=v;
            }
            else{
                p+=m;
                m=0;
            }
        }
        rec(c,m,p,v,sno+1,z*save_m);
    }
}

void solve()
{
    ld c,m,p,v;
    cin>>c>>m>>p>>v;

    ans = 0.0;
    rec(c,m,p,v,1,1.0);

    cout<<ans<<endl;
}

signed main()
{
    cout << fixed << setprecision(12);

    fast;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
