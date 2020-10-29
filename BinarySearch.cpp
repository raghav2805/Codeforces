
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int
const int mod=1e9+7;

lli fact(int n){

    lli s=1;
    for(int i=1;i<=n;i++){
        s= ( s%mod * i%mod)%mod;
    }
    //cout<<s%mod<<endl;

    return s%mod;
}

int main(){
    fast;

    int n,x,pos;
    cin>>n>>x>>pos;

    int l=0,r=n;
    int sm=x-1,lg=n-x;
    lli sum=1;

    while(l<r){
        int mid=(r+l)/2;
        if(mid==pos){
            l=mid+1;
        }
        else if(mid > pos){
            sum = (sum%mod * lg%mod)%mod;
            lg--;
            r=mid;
        }
        else{
            sum = (sum%mod *sm%mod)%mod;
            sm--;
            l=mid+1;
        }
    }

    if(l>0 && (l-1)==pos){
        //cout<<sum<<" "<<sm<<" "<<lg<<endl;
        cout<< (sum%mod * fact(sm+lg) %mod)%mod;
    }

    else{
        cout<<"0";
    }

    return 0;

}

