#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve()
{
    int n,m;
    cin>>n>>m;

    string s1,s2;
    cin>>s1;
    cin>>s2;


    int arr1[m];
    int arr2[m];

    int k=0;
    for(int i=0;i<m;i++){
        while(k<n && s1[k] != s2[i]){
            k++;
        }

        if(k==n){
            break;
        }

        arr1[i]=k;
        k++;

    }

    int k1=n-1;
    for(int i=m-1;i>=0;i--){
        while(k1>=0 && s1[k1] != s2[i]){
            k1--;
        }

        if(k1==-1){
            break;
        }

        arr2[i]=k1;
        k1--;
    }

    // cout<<arr2[0]<<" "<<arr2[1]<<endl;

    int mxx=INT_MIN;

    for(int i=1;i<m;i++){
        mxx=max(mxx,abs(arr1[i-1] - arr2[i]));
    }

    cout<<mxx<<endl;

    return;
}

signed main()
{
    fast;
    int t=1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
