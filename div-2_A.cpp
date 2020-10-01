
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[27]={0};

        for(int i=0;i<n;i++){
            string s;
            cin>>s;

            for(int j=0;j<s.length();j++){
                arr[s[j]-'a']++;
            }
        }

        bool flag=false;

        for(int i=0;i<27;i++){
            if(arr[i]!=0){
                if(arr[i]%n!=0){
                    flag=true;
                }   
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }
    return 0;

}
