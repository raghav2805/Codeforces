
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
const int INF = 1e9 +7;

void solve()
{
    int n;
    scanf("%lld",&n);

    vector<double> mi;
    vector<double> dia;

    for(int i=0;i<2*n;i++){
        
         double xx,yy;
        scanf("%lf%lf",&xx,&yy);
        // cout<<xx<<" "<<yy<<endl;
        if(xx==0){
            mi.push_back(abs(yy));
        }
        else{
            dia.push_back(abs(xx));
        }
    }

    sort(mi.begin(),mi.end());
    sort(dia.begin(),dia.end());

     double smm=0.00;
    

    for(int i=0;i<n;i++){
         double x2 = mi[i];
         double y2 = dia[i];

         double kk1=x2*1.0*x2 ;
         double kk2 = y2*1.0*y2;

         double aa2 = sqrt( kk1+kk2 );

        smm += aa2;
    }


    printf("%.15lf\n",smm);
   
    return;
}

signed main()
{

    // cout<<fixed<<setprecision(15);

    fast;
    int t = 1;
    scanf("%d",&t);

    while (t--)
    {
        solve();
    }

    return 0;
}
