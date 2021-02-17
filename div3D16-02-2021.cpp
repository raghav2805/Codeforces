#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int a[101];
int d[101];

void perm(int l,int h,int cnt){
    if(l>h){
        return ;
    }

    int k=*max_element(a+l,a+h+1);
    auto it=find(a+l,a+h,k);
    int p=it-a;
    // cout<<p<<endl;
    d[p]=cnt;
    ++cnt;

    perm(l,p-1,cnt);
    perm(p+1,h,cnt);

    return;
}

void solve(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    perm(0,n-1,0);

    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    return ;
}

int main(){
    fast;

    lli t=1;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}
