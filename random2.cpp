
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve(){

    lli s1,s2,s3;
    cin>>s1>>s2>>s3;

    lli b=sqrt(s1*s2/s3);
    lli a=sqrt(s1*s3/s2);
    lli c=sqrt(s2*s3/s1);

    cout<<4*(a+b+c)<<endl;

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
