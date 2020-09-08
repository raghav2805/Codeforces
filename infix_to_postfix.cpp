   
#include <bits/stdc++.h>
using namespace std;

int pre(char c){
    
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string solve(string s){
    
    string sc;
    int l=s.length();
    stack<char> st;
    st.push('N');
    
    for(int i=0;i<l;i++){

        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            sc+=s[i];
        }

        else if(s[i]=='('){
            st.push(s[i]);
        }
        
        else if(s[i]==')'){
            while(st.top()!='N' && st.top()!='('){
                char c=st.top();
                st.pop();
                sc+=c;
            }
            if(st.top()=='('){
                st.pop();
            }
        }
        
        else {
            while(s[i]!='N' && pre(s[i])<=pre(st.top()) ){
                char c=st.top();
                st.pop();
                sc+=c;
            }
            
            st.push(s[i]);
        }
        
    }
    
    while(st.top()!='N'){
        sc+=st.top();
        st.pop();
    }
    
    return sc;
    
}
int main() {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;
	    
	    cout<<solve(s)<<endl;
	}
	return 0;
}
