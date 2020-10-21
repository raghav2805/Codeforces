
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

    int n;
    cin>>n;

    lli num=1;
    lli den=1;

    for(int i=0;i<n/2;i++){
        num*=(n-i);
        den*=( (n/2)-i);
    }

    lli k= num/den;

    k/=2;

    lli a=den/(n/2);

    k*=pow(a,2);

    cout<<k<<endl;


    return 0;
}
