
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb(x) push_back(x)
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define all(v) v.begin(),v.end()
#define fast                         \
   ios_base::sync_with_stdio(false); \
   cin.tie(0);                       \
   cout.tie(0)
const int INF = 1e9 + 7;

void solve()
{
  
   int n,m,k;
   cin>>n>>m>>k;
   int cnt=0;

   int arr[n][m];

   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         cin>>arr[i][j];
         if(arr[i][j]>=k){
            cnt++;
         }

      }
   }

   int v[n+1][m+1];

   for(int i=0;i<=n;i++){
      for(int j=0;j<=m;j++){
         if(i==0 || j==0){
            v[i][j] = 0;
            continue;
         }

         v[i][j] = v[i-1][j] + v[i][j-1] - v[i-1][j-1] + arr[i-1][j-1];
      }
   }

   int p=2;

   while(p<=min(n,m)){
      for(int i=p;i<=n;i++){
         for(int j=p;j<=m;j++){
            int smm = v[i][j] - v[i][j-p] - v[i-p][j] + v[i-p][j-p];

            if((double) smm*1.0/(p*p) >= k){
               cnt++;
            }
         }
      }
      p++;
   }

   cout<<cnt<<endl;
   
   return;
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
