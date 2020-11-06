
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define lli long long int
const string s1[]={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};

vector<string> solve(string s){
    
    if(s.size()==0){
        vector<string> v;
        v.push_back("");
        return v;
    }
    
    char a=s[0];
    string a1=s.substr(1);
    vector<string> ss=solve(a1);

    vector<string> ss1;

    string ch=s1[a-'0'];

    for(int i=0;i<ch.size();i++){
        char k=ch[i];
        for(string r:ss){
            ss1.push_back(k+r);
        }
    }

    return ss1;
}

int main(){
    fast;
    
    string s;
    cin>>s;
    
    vector<string> a=solve(s);
    
    cout<<"[";
    for(int i=0;i<a.size()-1;i++){
        cout<<a[i]<<", ";
    }
    cout<<a[a.size()-1]<<"]";

    return 0;
}
