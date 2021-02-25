#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

void solve()
{
    int n;
    cin>>n;

    int arr[n];

    vector<int> even;
    vector<int> odd;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2){
            odd.push_back(arr[i]);
        }
        else{
            even.push_back(arr[i]);
        }
    }

    sort(even.rbegin(),even.rend());

    sort(odd.rbegin(),odd.rend());

    if(odd.size()==1 && even.size()==0){
        cout<<"Tie"<<endl;
        return ;
    }

    if(odd.size()>1 && even.size()==0){
        cout<<"Bob"<<endl;
        return ;
    }
    
    int i=0,j=0;

    int a=even.size();
    int b=odd.size();
    int c=0;
    int t1=0,t2=0;

    while(i<a && j<b){
        if(c==0){
            if(odd[j] < even[i]){
                t1+=even[i];
                i++;
            }
            else{
                j++;
            }
            c=1;
        }
        else{
            if(odd[j] < even[i]){
                i++;
            }
            else{
                t2+=odd[j];
                j++;
            }
            c=0;
        }
    }

    vector<int> other;

    for(int k=i;k<even.size();k++){
        other.push_back(even[k]);
    }

    for(int k=j;k<odd.size();k++){
        other.push_back(odd[k]);
    }

    for(int k=0;k<other.size();k++){
        if(c==0){
            if(other[k]%2==0){
                t1+=other[k];
            }
            c=1;
        }
        else{
            if(other[k]%2){
                t2+=other[k];
            }
            c=0;
        }
    }

    if(t1>t2){
        cout<<"Alice"<<endl;
    }
    else if(t1<t2){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }

    return;
}

signed main()
{
    fast;
    int t=1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
