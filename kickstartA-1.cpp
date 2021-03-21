
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb(x) push_back(x)
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define fast                         \
   ios_base::sync_with_stdio(false); \
   cin.tie(0);                       \
   cout.tie(0)
const int INF = 1e9 + 7;

void solve(int t)
{

   int n,k;
   cin>>n>>k;

   string s;
   cin>>s;

   int cnt=0;
   for(int i=0;i<n/2;i++){
      if(s[i] != s[n-i-1]){
         cnt++;
      }
   }

   if(cnt == k){
      cout<<"Case #"<<t<<": "<<0<<endl;
      return ;
   }

   cout<<"Case #"<<t<<": "<<abs(cnt - k)<<endl;
   
   return;
}

signed main()
{

    // cout<<fixed<<setprecision(15);
   fast;
   int t = 1;
   cin>>t;

   int j=1;
   while (j<=t)
   {
      solve(j);
      j++;
   }

   return 0;
}
