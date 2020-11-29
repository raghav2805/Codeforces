
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define pb push_back
#define vi vector<int>

bool compose(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

void solve()
{

    lli n;
    cin>>n;

    lli p[n],c[n];
    vector<pair<lli,lli>> v;

    for(int i=0;i<n;i++){
        cin>>p[i];
    }

    for(int i=0;i<n;i++){
        cin>>c[i];
    }

    for(int i=0;i<n;i++){
        v.push_back({p[i],c[i]});
    }

    sort(v.begin(),v.end(),compose);

    lli ans=0;
    int i=0;

    while(n){

        if(v[i].first <=n){
            ans+=(v[i].first*v[i].second);
            n-=v[i].first;
            i++;
        }

        else{
            ans+=(n)*v[i].second;
            n=0;
        }
    }

    cout<<ans<<endl;

    return;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}November lunchtime
