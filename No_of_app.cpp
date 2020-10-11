
#include <bits/stdc++.h>
using namespace std;
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define lli long long int
int mod = 1e9 + 7;

int main()
{
    fastio;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a = 0, b = 0, c = 0;

        if (n == 1)
        {
            cout << "-1"<<endl;
        }
        else if (n == 2)
        {
            cout << "-1"<<endl;
        }
        else if (n == 4)
        {
            cout << "-1"<<endl;
        }
        else
        {
            c = n / 7;
            n = n % 7;

            if (n == 1)
            {
                c--;
                b = 1;
                a = 1;
            }

            else if(n==2){
                c--;
                a=3;
            }
            
            else if(n==3){
                a=1;
            }

            else if(n==4){
                c--;
                a=2;
                b=1;
            }

            else if(n==5){
                b=1;
            }

            else if(n==6){
                a=2;
            }

            cout<<a<<" "<<b<<" "<<c<<endl;
        }

       
    }

    return 0;
}
