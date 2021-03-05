
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve(){
    
    int n;
    cin>>n;
    int k=log2(n);
    if(pow(2,k) <= n){
        k++;
    }

    string s=bitset<32>(n).to_string();

    int cnt=0;
    int n1=s.size();

    for(int i=0;i<n1;i++){
        if(s[i]=='1'){
            cnt++;
        }
    }

    int mxx=0;

    string s1,s2;

    int f=0;
    for(int i=32-(k);i<n1;i++){
        if(s[i] == '0'){
            s1.pb('1');
            s2.pb('1');
        }

        if(s[i]=='1' && f==0){
            s1.pb('1');
            s2.pb('0');
            f=1;
        }

        else if(s[i] == '1' && f==1){
            s1.pb('0');
            s2.pb('1');
        }
    }

    int ll1 = btoi(s1);
    int ll2 = btoi(s2);

    int ll=ll1*ll2;

    cout<<ll<<endl;
    return ;
}

signed main()
{

    fast;
    int t = 1;
    cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}
