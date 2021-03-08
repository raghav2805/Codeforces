
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitwise<32>(x).to_string()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve(){
  
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a=0,b=0,c=0;

    for(int i=0;i<n;i++){

        if(arr[i] == 100){
            c++;
            if(b>=1 && a>=1){
                b--;
                a--;
            }
            else if(a>=3){
                a-=3;
            }
            else{
                cout<<"NO"<<endl;
                return ;
            }
        }

        else if(arr[i] == 50){
            b++;
            if(a>=1){
                a--;
            }
            else{
                cout<<"NO"<<endl;
                return ;
            }
        }

        else{
            a++;
        }
    }

    cout<<"YES"<<endl;

    return ;
}

signed main()
{

    fast;
    int t = 1;
    // cin>>t;

    while (t--)
    {
        solve();
    }

    return 0;
}
