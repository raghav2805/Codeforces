
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int solve(int n){

    if(n==0 || n==1){
        return 0;
    }

    return (n/2-1)+solve(n-2);
}

int main(){
    fast;
    
   int t;
   cin>>t;

   while(t--){
       int n;
       cin>>n;

       cout<<solve(n)<<endl;
   }

    return 0;
}
