 
#include <bits/stdc++.h>
using namespace std;

void solve(long long arr[],long long n,long long s[]){

    stack<long long> st;
    st.push(arr[n-1]);

    s[n-1]=-1;

    for(int i=n-2;i>=0;i--){
        long long sc=-1;

        while(!st.empty() && arr[i]>st.top()){
            st.pop();
        }
        if(!st.empty()){
            sc=st.top();
        }
        s[i]=sc;
        st.push(arr[i]);
    }

}

void print(long long s[],long long n){

    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }

}

int main(){
    
    int t;
    cin>>t;

    while(t--){
        
        long long n;
        cin>>n;

        long long arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long s[n];

        solve(arr,n,s);
        print(s,n);
        cout<<endl;
    }
    return 0;
}
