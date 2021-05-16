
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e6 + 7;

void solve(){
    
    int n;
    cin>>n;

    vi v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(all(v));

    int ans=0;

    int k=0;
    int i=0;

    while(i < n){
        k = v[i] + i - 1;
        while(k<n && v[k] - (k-i+1) > 0){
            k += v[k] - (k-i+1);
        }
        if(k<n)
            ans++;
        i= k +1;
    }

    cout<<ans<<endl;

}

signed main()
{
    fast;

    // cout<<fixed<<setprecision(10);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
