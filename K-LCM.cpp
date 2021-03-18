#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void when(int n){
    if(n%2){
        n--;
        cout<<n/2<<" "<<n/2<<" "<<1<<endl;
        return ;
    }

    float k=log2(n);
    if(n%4==0){
        cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        return ;
    }

    n-=2;
    cout<<n/2<<" "<<n/2<<" "<<2<<endl;
}

void solve()
{
    int n,m;
    cin>>n>>m;

    if(m==3){
        when(n);
        return ;
    }    

    for(int i=0;i<m-3;i++){
        cout<<1<<" ";
    }

    when(n-m+3);

    return;
}

signed main()
{

    // cout<<fixed<<setprecision(15);
    fast;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
