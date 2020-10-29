
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int

int main(){
    fast;

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int cnt=1,ans=0;
        int x,idx=1;
        queue<int> q;
        q.push(1);

        while(!q.empty()){
            x=0;

            while(cnt--){
                int temp=q.front();
                q.pop();

                int prev=-1;
                while(idx<n){
                    if(arr[idx] < prev) {break;}

                    prev=arr[idx];
                    q.push(arr[idx]);
                    idx++;x++;
                }
            }

            cnt=x;
            if(q.size())ans++;
        }
        
        cout<<ans<<endl;

    }

    return 0;

}

