
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve()
{
    string s;
    cin>>s;

    int cnt_1=0,cnt_4=0;

    for(int i=0;i<s.size();i++){
        if(s[i]!='1' && s[i]!='4'){
            cout<<"NO"<<endl;
            return ;
        }
        else {
            if(s[i]=='1'){
                cnt_1++;
                cnt_4=0;
            }
            else{
                if(cnt_1==0){
                    cout<<"NO"<<endl;
                    return ;
                }
                cnt_4++;
                if(cnt_4>2){
                    cout<<"NO"<<endl;
                    return ;
                }

                if(i<s.size()-1 && s[i+1]!='4' && cnt_4>=2){
                    cnt_1=0;
                }
            }
        }
    }

    cout<<"YES"<<endl;


    return ;
}

signed main()
{

    fast;
    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}
