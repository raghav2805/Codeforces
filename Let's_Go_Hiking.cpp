
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 +7;

void solve()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> left(n);
    vector<int> right(n);

    left[0]=1;
    right[n-1]=1;
    int mxx=0;

    for(int i=1;i<n;i++){
        if(v[i-1] < v[i]){
            left[i] = left[i-1] +1;
            mxx=max(mxx,left[i]);
        }
        else
        {
            left[i] =1;
        }
    }

    for(int i=n-2;i>=0;i--){
        if(v[i] > v[i+1]){
            right[i] = right[i+1] +1;
            mxx=max(mxx,right[i]);
        }
        else{
            right[i] = 1;
        }
    }

    int a=0,b=0;

    for(int i=0;i<n;i++){
        if(left[i] == mxx){a++;}
        if(right[i] == mxx){a++;b++;}
    }

    if(a>2){
        cout<<0<<endl;
        return ;
    }

    int ans=0;
    for(int i=0;i<n;i++){
        if(left[i] == mxx && right[i] == mxx && mxx%2==1){
            ans++;
        }
    }
    cout<<ans<<endl;
   
    return;
}
    
signed main()
{

    // cout<<fixed<<setprecision(15);

    fast;
    int t = 1;
    // scanf("%d",&t);

    while (t--)
    {
        solve();
    }

    return 0;
}
