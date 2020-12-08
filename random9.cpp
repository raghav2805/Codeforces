
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define pb push_back
#define vi vector<int>


void solve()
{
    lli n,m;
    cin>>n>>m;

    char arr[n][m];

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        for(int j=0;j<m;j++){
            arr[i][j]=s[j];
        }
    }

    char arr1[n][m];
    char k1='B';
    char k2='W';

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='-'){
                arr1[i][j]='-';
                continue;
            }

            if(i%2==0 && j%2==1){
                arr1[i][j]='W';
            }

            else if(i%2==1 && j%2==1){
                arr1[i][j]='B';
            }

            else if(i%2==0 && j%2==0){
                arr1[i][j]='B';
            }
            else{
                arr1[i][j]='W';
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr1[i][j]<<"";
        }
        cout<<endl;
    }


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
