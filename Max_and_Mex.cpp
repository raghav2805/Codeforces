
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const int INF=1e9+7;

void solve(){
   
   int n,k;
   cin>>n>>k;

   vector<int> v(n);
   map<int,int> mpp;
   unordered_set<int> s;

   for(int i=0;i<n;i++)
   {
      cin>>v[i];
      mpp[v[i]]++;
      s.insert(v[i]);
   }

   sort(v.begin(),v.end());

   int mex=0;

   for(int i=0;i<=1e9;i++){
      if(mpp[i]!=0){
         continue;
      }
      mex=i;
      break;
   }

   if(k==0){
      cout<<s.size()<<endl;
      return ;
   }
  
   if(mex < v[n-1]){
      if( mpp[ceil ( ((mex + v[n-1])*1.0)/2 ) ] == 0  ){
         cout<<s.size() +1 <<endl;
         return ;
      }
      else{
         cout<<s.size()<<endl;
         return ;
      }
   }

   else if(mex > v[n-1]){
      cout<<s.size() + k <<endl;
      return ;
   }

   

    return ;
}

signed main(){

    fast;
    int t=1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
