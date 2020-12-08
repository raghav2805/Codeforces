
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve(){

    lli n,m;
    cin>>n>>m;

    int arr[m];
    int arr1[m];

    for(int i=0;i<m;i++){
       cin>>arr[i];
       arr1[i]=arr[i];
    }

    int a,b,c,d,e;
    e=n;
    int smm=0,smm1=0;
    sort(arr,arr+m);

    int i=0;
    while(n){
        smm+=arr[i];
        arr[i]--;
        if(arr[i]==0){
            i++;
        }
        n--;
    }

    while(e){
        int k=*max_element(arr1,arr1+m);
        auto it=find(arr1,arr1+m,k);
        int c=distance(arr1,it);

        smm1+=k;
        arr1[c]--;
        e--;
    }

    cout<<max(smm1,smm)<<" "<<min(smm1,smm)<<endl;

    return;
}

int main()
{
    fast;

    int t=1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
