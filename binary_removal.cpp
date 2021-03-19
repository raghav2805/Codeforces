#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve()
{

    string s;
    cin>>s;

    int n = s.size();

    int f=0;
    int zero=0,one=0;

    if(s[0] == '0'){
        zero++;
    }
    else{
        one++;
    }


    for(int i=1;i<n;i++){
        if(s[i] == -'0'){
            zero++;
        }
        else{
            one++;
        }


        if(s[i-1]=='1' && s[i] == '1'){
            f=1;
        }

        if(f>0){
            if(s[i-1] == '0' && s[i] == '0'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
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
