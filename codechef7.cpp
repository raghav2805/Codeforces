
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define all(v) v.begin(),v.end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;


void solve(){
    
    int n;
    cin>>n;

    int arr[n];
    int a[n]={0};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            if(i==j){
                continue;
            }

            if(arr[i] == arr[j]){
                a[i]++;
                a[j]++;
                
            }

            if(arr[i] < arr[j]){
                break;
            }
        }

    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;



}

signed main()
{
    // cout<<fixed<<setprecision(15);

    fast;
    int t = 1;
    cin>>t;

    while(t--)
    {
        solve();
    }

    return 0;
}
