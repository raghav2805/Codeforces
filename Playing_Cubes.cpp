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

	int a,b;
	cin>>a>>b;

	a--;b--;

	cout<<max(a,b) <<" "<<min(a,b)+1<<endl;

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
