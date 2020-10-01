
#include<bits/stdc++.h>
using namespace std;
void fun()
{
      
        int m,smm=0,x0,x1,x2,y0,y1,y2;

        cin>>x0>>x1>>x2;
        cin>>y0>>y1>>y2;

        m=min(x0,y2);
        y2-=m;
        x0-=m;

        m=min(x1,y1);
        x1-=m;
        y0-=m;

        m=min(x2,y1);
        x2-=m;
        y1-=m;
        smm+=m*2;
        
        smm-=2*min(x1,y2);

        cout<<smm<<endl;
        
}


int main(){
    int t;
    cin>>t;

    while(t--){
      fun();
    }
    return 0;
}
