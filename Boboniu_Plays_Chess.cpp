
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

    int t=1;
//    cin>>t;

    while(t--){
        int n,m,sx,sy;

        cin>>n>>m>>sx>>sy;
        
        for(int i=1;i<=n;i++){

            for(int j=1;j<=m;j++){
                cout<<sx<<" "<<sy<<endl;
                sy++;
                if(sy>m){
                    sy=1;
                }
            }
            sx++;
            sy--;
            if(sy==0){
                sy=m;
            
            }
            if(sx>n){
                sx=1;
            }
        }
        
    }
    return 0;
}
