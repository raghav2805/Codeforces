#include<bits/stdc++.h>
using namespace std;
 
 void solve(){
     int n,k;
     cin>>n>>k;

     string s1,s2;
     cin>>s1;
     cin>>s2;

    vector<int> ca(26),cb(26);

     for(int i=0;i<n;i++){
         ca[s1[i]-'a']++;
         cb[s2[i]-'a']++;
     }

    for(int i=0;i<25;i++){
        if( ca[i]<cb[i]){
            cout<<"No"<<endl;
            return ;
        }
        int diff=ca[i]-cb[i];
        if(diff%k){
            cout<<"No"<<endl;
            return ;
        }

        ca[i]-=diff;
        ca[i+1]+=diff;
    }

    cout<<"Yes"<<endl;
    return ;



 }
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;
}
