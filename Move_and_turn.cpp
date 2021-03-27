#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

int n,m;

bool valid(int i,int j){
    if(i<n && i>=0 && j<m && j>=0){
        return true;
    }

    return false;
}


void solve()
{
    
    cin>>n>>m;

    char arr[n][m];
    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        vector<int> l;

        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(j==0){
                if(arr[i][j]=='*'){
                    l.pb(1);
                }
                else{
                    l.pb(0);
                }
                continue;
            }

            if(arr[i][j]=='*'){
                l.pb(l[l.size()-1]+1);
            }
            else{
                l.pb(l[l.size()-1]);
            }
        }

        v.push_back(l);
    }


    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == '*'){
                ans++;

                int k_i=i+1;
                int k_j1=j-1;
                int k_j2=j+1;

                while(1){
                    if(!valid(k_i,k_j1)){
                        break;
                    }
                    if(!valid(k_i,k_j2)){
                        break;
                    }

                   
                    if(k_j1>0){
                        int f = k_j2-k_j1+1;
                        if( v[k_i][k_j2] - v[k_i][k_j1-1] == f){
                            ans++;
                        }
                        else{
                            break;
                        }
                    }

                    else{
                        int f = k_j2+1;
                        // cout<<f<<endl;
                        if(v[k_i][k_j2] == f){
                            ans++;
                        }
                        else{
                            break;
                        }
                    }

                    k_i = k_i+1;
                    k_j1=k_j1-1;
                    k_j2=k_j2+1;

                }
            }
        }
    }
    
    cout<<ans<<endl;

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
