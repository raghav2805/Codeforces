
#include<bits/stdc++.h>
using namespace std;

bool arr[100][100]={false};

bool sure(int x,int y,int n,int m){

    if((x<=n && x>0) && (y<=m and y>0) && arr[x][y]==false){
        return true;
    }
    return false;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x=1;
//    cin>>x;

    while(x--){
        int a,b,sx,sy;

        cin>>a>>b>>sx>>sy;
        
        for(int i=1;i<=a;i++){

            for(int j=1;j<=b;j++){
                cout<<sx<<" "<<sy<<endl;
                sy++;
                if(sy>b){
                    sy=1;
                }
            }
            sx++;
            sy--;
            if(sy==0){
                sy=b;
            
            }
            if(sx>a){
                sx=1;
            }
        }
        
    }
    return 0;
}
