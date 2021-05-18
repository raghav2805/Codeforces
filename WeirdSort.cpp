
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
    int n,m;
    cin>>n>>m;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vi p(m);
    for(int i=0;i<m;i++){
        cin>>p[i];
        p[i]--;
    }

    sort(all(p));

    vi ll;

    int k=0,mxx=INT_MIN,mxx1=INT_MIN,mxx2=INT_MIN;

    int mnn1 = INT_MAX;

    for(int i=0;i<n;i++){
        if( k< m && i == p[k]){
            int j;
            for( j=k;j<m;j++){
                
                mnn1 = min(mnn1,v[p[j]]);
                mxx1 = max(mxx1,v[p[j]]);
                if(j< m-1 && p[j] + 1 != p[j+1]){
                    mnn1 = min(mnn1,v[p[j]+1]);
                    mxx1 = max(mxx1,v[p[j]+1]);
                    j++;
                    break;
                }

                else if(j == m-1){
                    if(p[j]+ 1 < n){
                        mnn1 = min(mnn1,v[p[j]+1]);
                        mxx1 = max(mxx1,v[p[j]+1]);
                    }
                }
            }

            k = j;
            i=p[j-1]+1;

            if(mnn1 < mxx){
                cout<<"NO"<<endl;
                return;
            }
            
            mxx = mxx1;
            mnn1 = INT_MAX;
            mxx1 = INT_MIN;
            continue;
        }

        if(v[i] < mxx){
            cout<<"NO"<<endl;
            return ;
        }

        mxx = max(mxx,v[i]);

    }

    cout<<"YES"<<endl;

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
