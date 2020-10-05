
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int solve(){
    fastio;

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int cnt_zero=0,cnt_neg=0;
    int max_neg=INT_MIN;
    int pro=1;
    int min_pos=INT_MAX;

    for(int i=0;i<n;i++){

        if(arr[i]==0){
            cnt_zero++;
        }
        if(arr[i]<0){
            cnt_neg++;
            max_neg=max(max_neg,arr[i]);
        }

        if(arr[i]>0){
            min_pos=min(min_pos,arr[i]);
        }

        pro=pro*arr[i];
    }
    
    if(cnt_zero==n){
        return 0;
    }

    if(!(cnt_neg&1) && cnt_neg!=0){
        pro=pro/max_neg;
    }
    
    return pro;

}

int main(){
    fastio;
    int t;
    cin>>t;

    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
    
}
