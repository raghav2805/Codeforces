#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int n,e,h;
pair<int,int> arr[3];
int e1,h1;
int INF = 1e16;

int fun(int x){
    int temp = n;
    int a[3];
    a[0] = e1/2;
    a[1] = h1/3;
    a[2] = x;
    int ans=0;

    for(pair<int,int> xx: arr){
        int cc1 = xx.first;
        int cc2 = xx.second;

        int dif = min(a[cc2], temp);
        temp -= dif;
        ans += dif*cc1;
    }

    if(temp){
        return INF;
    }

    return ans;
}

void solve(){

    cin>>n>>e>>h;
    arr[0].second =0;
    arr[1].second =1;
    arr[2].second =2;

    for(int i=0;i<3;i++){
        cin>>arr[i].first;
    }    
    e1=e;h1=h;

    sort(arr,arr+3);

    int cake = min(e,h);
    e1-=cake;
    h1-=cake;
    int ans=INF;

    for(int i = min(n*3,cake);i>=0;i--){
        int y = fun(i);
        e1++;
        h1++;
        // cout<<i<<" "<<y<<endl;
        ans = min(y,ans);
    }

    if(ans == INF){
        cout<<-1<<endl;
        return ;
    }

    cout<<ans<<endl;

    return ;
}

signed main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}
