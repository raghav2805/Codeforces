
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
        cin >> n;

        cout<<2<<endl;
        int a=n,b=n-1;

        for(int i=1;i<n;i++){
            cout<<a<<" "<<b<<endl;
            a=ceil((a+b)/2.0);
            b--;
        }
       
    }

    return 0;
}
