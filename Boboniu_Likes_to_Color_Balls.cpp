
#include<bits/stdc++.h>
using namespace std;

bool check(int n,int m,int x,int y){
    return (x%2+m%2+n%2+y%2)>1 ? false : true;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m,x,y;

        cin>>n>>m>>x>>y;
        
        if(check(n,m,x,y)){
            cout<<"Yes"<<endl;
        }

        else if(n>0 && m>0 && x>0 && check(n-1,m-1,x-1,y+1)){
            cout<<"Yes"<<endl;
        }

        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}
