
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve(){
    
    int n,k;
    cin>>n>>k;

    int arr[n+1];
    for(int i=1;i<=n;i++){
        if(i%2)arr[i]=-i;
        else{arr[i]=i;}
    }

    if(k==n){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }

    if(k<n/2){
        int i=2;
        while(k!=0){
            if(arr[i]==i){
                k--;
                i+=2;
            }
            else{
                arr[i]=i;
            }
        }

        while(i<=n){
            arr[i]=-i;
            i++;
        }
    }

    else if(k>n/2){
        int j=n/2;
        k-=j;
        for(int i=n;i>0;i--){
            if(arr[i]==-i){
                arr[i]=i;
                k--;
            }

            if(k==0){
                break;
            }
        }
        
    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return;
}

int main()
{
    fast;

    int t=1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
