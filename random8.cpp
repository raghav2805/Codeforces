#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 bool compose(int a,int b){
     return a>b;
 }

 void solve(){
    
   lli k;
   cin>>k;

   string s;
   cin>>s;

    lli arr[26]={0},mxx=0;
   for(int i=0;i<s.size();i++){
       arr[s[i]-'a']++;
       if(mxx < arr[s[i]-'a']){
           mxx=arr[s[i]-'a'];
       }
   }

    string s1;

   for(int i=0;i<26;i++){
       if(arr[i]==0){
           continue;
       }
       else if(arr[i]%k!=0) {
           cout<<"-1"<<endl;
           return ;
       }
   }

    for(int i=0;i<26;i++){
        for(int j=0;j<arr[i]/k;j++){
            if(arr[i]!=0){
                char t=i+97;
                s1.push_back(t);
            }
        }
    }

    string ans;
    for(int i=0;i<k;i++){
        ans+=s1;
    }

    cout<<ans<<endl;
    return;
 }

int main(){
    fast;

    int t=1;
    //cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
