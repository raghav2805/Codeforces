    
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n,int s[]){

    stack<int> ab1;
    ab1.push(0);

    s[0]=1;

    for(int i=1;i<n;i++){
        int sc=1;

        while(!ab1.empty() && arr[ab1.top()] <= arr[i]){
            ab1.pop();
        }

        s[i]=(ab1.empty())? (i+1) : (i-ab1.top());

        ab1.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }


}
int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int arr1[n];
        solve(arr,n,arr1);
        cout<<endl;
    }
    return 0;
}
