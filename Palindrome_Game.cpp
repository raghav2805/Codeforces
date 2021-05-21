
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1824261409;
const int ll =  1824261419;

vi prime;

void seive(){
    vector<bool> vis(INF,false);

    vis[0] =true;
    vis[1] = true;
    int p=2;

    while(p*p<=INF){
        if(!vis[p]){
            
            for(int i=p*p;i<=INF;i+=p){
                vis[i] = true;
            }
        }
        p++;
    }

    for(int i=0;i<INF;i++){
        if(!vis[i])prime.pb(i);
    }

}

int n;
string s;
void ans(int cnt){
    if(cnt%2==0 || cnt==1){
        cout<<"BOB"<<endl;
        return ;
    }

    cout<<"ALICE"<<endl;
}

void solve(){
    cin>>n;

    cin>>s;

    int cnt=0;
    rep(i,0,n){ if(s[i] == '0') { cnt++ ;} }

    int a=0;

    for(int i=0;i<ceil(n*1.0/2);i++){
        if(s[i] != s[n-i-1]){
            a++;
        }
    }

    if(a==1){
        
        if(cnt-1==1){
            cout<<"DRAW"<<endl;
            return ;
        }

        cout<<"ALICE"<<endl;
        return ;
    }

    if(a==2){
        cout<<"ALICE"<<endl;
        return ;
    }

    if(a>2){
        cout<<"ALICE"<<endl;return;}

    ans(cnt);
    
}

signed main()
{
    fast;

    // cout<<fixed<<setprecision(10);

    int t = 1;
    cin >> t;
    // seive();

    while (t--)
    {
        solve();
    }
}
