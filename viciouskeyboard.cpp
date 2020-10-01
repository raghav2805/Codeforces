#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt=0;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
       if((str[i]=='V'&&str[i+1]=='K') )
            cnt++;
    }
    int chn=0;
    for(int i=0;i<n;i++)
    {
       if(str[i]=='V'&&str[i+1]=='V'&&str[i+2]!='K'&&chn==0)
           {
             cnt++;
            chn++;
           }
    }
    for(int i=0;i<n;i++)
    {
       if(str[i]=='K'&&str[i-1]=='K'&&str[i-2]!='V'&&chn==0)
           {
             cnt++;
            chn++;
           }
    }

    cout<<cnt;
}
