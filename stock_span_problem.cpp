    
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[],int n,int s[]){

    stack<int> st;
    st.push(0);

    s[0]=1;

    for(int i=1;i<n;i++){
        int sc=1;

        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }

        s[i]=(st.empty())? (i+1) : (i-st.top());

        st.push(i);
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
