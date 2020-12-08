#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
 bool compose(int a,int b){
     return a>b;
 }

void solve(){

    lli d1,d2,v1,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;

    lli smm=0;

    smm+=min(d1,d2)-1;
    
    if(d1<d2)
    {
        while(d1!=d2){
            smm++;
            p-=v1;
            d1++;
            if(p<=0){
                cout<<smm<<endl;
                return ;
            }
        }

        lli q=v1+v2;
        while(p>0){
            smm++;
            p-=q;
        }
    }


    else{
        while(d2!=d1){
            smm++;
            p-=v2;
            d2++;
            if(p<=0){
                cout<<smm<<endl;
                return;
            }
        }

        lli q=v1+v2;
        while(p>0){
            smm++;
            p-=q;
        }
    }

    cout<<smm<<endl;

    return ;
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
