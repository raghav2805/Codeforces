
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

void solve(){

    string s;
    cin>>s;
    int n = s.size();

    int i=0,j=0,p=-1,p1=-1;
    int ans=0;

    while(i<n){
        while(j<n){
            if(s[j] == '?' && p==-1){
                p=j;
            }

            if(s[j] != '?'){
                p=-1;
            }

            if(j<n-1 && s[j]!='?' && s[j] == s[j+1]){
                break;
            }

            if(j<n-1 && s[j] == '?' && s[j+1] != '?'){
                if( (j-p+1)%2 == 1 ){
                    if(p-1 >=i && s[p-1] != s[j+1] ){
                        break;
                    }
                    
                }
                else{
                        if(p-1>=i && s[p-1] == s[j+1]){
                            break;
                        }
                    }
            }


            j++;
        }


        if(j==n){
            ans += ((j-i)*(j-i+1))/2;
            cout<<ans<<endl;
            return ;
        }

        ans += ((j-i+1)*(j-i+2))/2;

        // if(p1 != -1){
        //     ans -= ((p1-p+1)*(p1-p+2))/2;
        // }

        // p1=-1;

        if(s[j] == '?')
        {
            // p1=j;
            ans -= ((j-p+1)*(j-p+2))/2;
        }


        if(p!=-1){
            i=p;
            j=p;
        }
        else{
            i=j+1;
            j++;
        }
        p=-1;
    }

    cout<<ans<<endl;
   
}

signed main()
{

    // cout<<fixed<<setprecision(15);
   fast;
   int t = 1;
   cin>>t;

   while (t--)
   {
      solve();
   }

   return 0;
}
