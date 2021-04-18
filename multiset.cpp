
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define itob(x) bitset<32>(x).to_string()
#define all(v) v.begin(),v.end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e6 + 7;

int n,m;
int fen[INF+7];

void update(int t,int val){

    while(t<=n){
        fen[t] += val;
        t+= (t&(-t));
    }
}

int binary(int k)
{
    int curr=0,prevsum=0,ans=0;

    for(int i=log2(n);i>=0;i--){
        if(curr+(1<<i) <= n && fen[curr+(1<<i)] + prevsum < k){
            curr+=(1<<i);
            prevsum+=fen[curr];
        }
    }

    return curr+1;
}

void solve(){
    cin>>n>>m;
    memset(fen,0,n+1);

    vector<int> v(n+1,0);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v[a]++;
        update(a,1);
    }

    int t;
    while(m--){
        cin>>t;

        if(t<0){
            t= abs(t);
            int k = binary(t);
            v[k]--;
            update(k,-1);
        }else{
            v[t]++;
            update(t,1);
        }
    }

    for(int i=1;i<=n;i++){
        if(fen[i]!=0){
            cout<<i<<endl;
            return ;
        }
    }

    cout<<0<<endl;

    return ;

}

signed main(){
    fast;

    int t=1;
    // cin>>t;

    while(t--){
        solve();
    }
}

