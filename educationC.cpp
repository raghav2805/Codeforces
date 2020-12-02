
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define pb push_back
#define vi vector<int>

void solve(){
    
    lli a,b;
    cin>>a>>b;

    if(a==b){
        cout<<a-1<<" "<<b<<endl;
    }

    else if(a>b){
        cout<<a-1<<" "<<b<<endl;
    }

    else{
        cout<<a-1<<" "<<b<<endl;
    }

    return;
}

int main(){
    fast;

    int t=1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
