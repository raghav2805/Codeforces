#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve(){

    lli n,m;
    cin>>n>>m;

    string s1,s2;
    lli smm=5;
    s1.push_back('5');
    s2.push_back('5');

    while(smm<n){
        smm+=4;
        int l=s1.size();
        s1.insert(0,"4");
        s2.insert(0,"5");
    }

    cout<<s1<<" "<<s2<<endl;

    return ;
}

int main(){
    fast;

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;

}
