
#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int
int mod = 1e9 + 7;

int main()
{
    fastio;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sec=INT_MIN;
        for(int i=1;i<n;i++){
            if(arr[0]!=arr[i]){
                sec=i;
                break;
            }
        }

        if(sec==INT_MIN){
            cout<<"NO"<<endl;
        }

        else{
            cout<<"YES"<<endl;

            for(int i=1;i<n;i++){
                if(arr[0]!=arr[i]){
                    cout<<1<<" "<<i+1<<endl;
                }
                else{
                    cout<<sec+1<<" "<<i+1<<endl;
                }

            }
        }
    }
    return 0;
}
