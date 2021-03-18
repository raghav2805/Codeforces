
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb(x) push_back(x)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 +7;

void solve()
{
    int n,m;
    cin>>n>>m;

    int arr[n];
    map<int,int> mpp;
    int cnt=0,f=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%m){
            arr[i] = arr[i]%m;
            mpp[arr[i]]++;
        }
        else{
            f=1;
        }
    }

    if(f)cnt++;

    int vv=0;


    for(int i=1;i<=m/2;i++){
        if(mpp[i] == 0){
            if(mpp[m-i]>0)
                vv += mpp[m-i];
        }
    }


    for(auto x:mpp){
        if(x.first > m/2){
            break;
        }

        if(x.second==0){
            continue;
        }

        int k=mpp[m - x.first];
        if(  k >= 1 ){

            if( k > x.second){
                k-=x.second;
                k--;
                x.second=0;
            }

            else  if(k < x.second){
                x.second -= k;
                x.second--;
                k=0;
            }

            else{
                x.second=0;
                k=0;
            }
        }

        else{
            vv+= x.second;
            continue;
        }
       
        vv += max(k,x.second);
        cnt++;
        
    }

    cout<<cnt+vv<<endl;


    return;
}
    
signed main()
{

    // cout<<fixed<<setprecision(15);

    fast;
    int t = 1;
    cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}
