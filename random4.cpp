#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 void solve(){
     
    string n;
    cin>>n;

    for(int i=0;i<n.size();i++){
        if(n[i]!='1'){
            if(n[i]!='4'){
            cout<<"NO"<<endl;
            return;
            }
        }
    }

    lli f=0,o=0;

    for(int i=0;i<n.size();i++){
        if(n[i]=='1'){
            o=0;
            f=0;
            o++;
        }

        if(n[i]=='4' && o>=1){
            f++;
            if(f>2){
                cout<<"NO"<<endl;
                return ;
            }
        }
        else if(n[i]=='4' && o<1){
            cout<<"NO"<<endl;
            return ;
        }
    }

    cout<<"YES"<<endl;

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
