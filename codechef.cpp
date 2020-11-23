
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define vi vector<int>

void solve(){
    string s1;
    string s2;

    cin>>s1>>s2;
    int n=s1.size();

    int i=0,j=1;

    int smm=0;

    bool flag=true,flag1=true;

    while(i<n){
        if(s1[i]!=s2[i]){
            flag=false;
        }

        if(flag==false && s1[i]==s2[i]){
            smm++;
            flag=true;
        }
        i+=2;
    }

    if(flag==false){
        smm++;
    }

    while(j<n){
        if(s1[j]!=s2[j]){
            flag1=false;
        }

        if(flag1==false && s1[j]==s2[j]){
            smm++;
            flag1=true;
        }
        j+=2;
    }

    if(flag1==false){
        smm++;
    }
    cout<<smm<<endl;

}

int main(){
    fast;

    int t;
    cin>>t;

    while(t--){
       solve();
    }

    return 0;
}
