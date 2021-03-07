#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define btoi(s1) stoi(s1, nullptr, 2)
#define dot(x)  cout<<fixed<<setprecision(x)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 + 7;

void solve(){

	int n,k;
	cin>>n>>k;

	int arr[k];

	for(int i=0;i<k;i++){
		cin>>arr[i];
	}

	sort(arr,arr+k);

	int mnn=INT_MAX;

	for(int i=0;i+n-1 < k;i++){
		mnn = min(mnn,arr[i+n-1] - arr[i]);
	}

	cout<<mnn<<endl;

	return ;
	
}

signed main(){
	fast;

	dot(2);

	int t=1;
	// cin>>t;

	while(t--)
	{
		solve();
	}
	return 0;
}
