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

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(n%2==1){
        cout<<"NO"<<endl;
        return ;
    }

    if(s.back() == '0' || s.front() == '0'){
        cout<<"NO"<<endl;
        return;
    }

    int z=0,o=0;

    rep(i,0,n){
        if(s[i] == '0'){
            z++;
        }
        else{
            o++;
        }
    }

    if(z%2!=0 || o%2!=0){
        cout<<"NO"<<endl;
        return ;
    }

    string a(n,'0');
    string b(n,'0');

    stack<char> s1;
    stack<char> s2;

    int k = 0,p=0;
    
    rep(i,0,n){
        if(s[i]=='1' && k<o/2){
            a[i] = '(';
            b[i] = '(';
            s1.push('(');
            s2.push('(');
            k++;
        }

        else if(s[i] == '1' && k>=o/2){
            
            a[i] = ')';
            b[i] = ')';
            s1.pop();
            s2.pop();
        }

        else if(s[i] == '0'){
            if(s1.empty() && s2.empty()){
                cout<<"NO"<<endl;
                return ;
            }

            if(p%2==0){
                a[i] = ')';
                b[i] = '(';
                s1.pop();
                s2.push('(');
                p++;
            }
            else{
                a[i] = '(';
                b[i] = ')';
                s1.push('(');
                s2.pop();
                p++;
            }
        }
    }

    cout<<"YES"<<endl;
    cout<<a<<endl<<b<<endl;
}

signed main()
{
    fast;

    // cout<<fixed<<setprecision(10);
    int t = 1;
    cin >> t;


    while (t--)
    {
        solve();
    }

    return 0;
}
