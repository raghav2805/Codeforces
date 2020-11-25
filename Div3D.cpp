
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

pair<int, int> factor(lli n)
{

    pair<int, int> cnt_a;
    cnt_a = {0, 1};

    int cnt = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        cnt++;
    }

    if (cnt > cnt_a.first)
    {
        cnt_a.first = cnt;
        cnt_a.second = 2;
    }

    for (int i = 3; i < sqrt(n) + 1; i += 2)
    {
        cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt > cnt_a.first)
        {
            cnt_a.first = cnt;
            cnt_a.second = i;
        }
    }

    return cnt_a;
}

void solve()
{
    lli n;
    cin >> n;

    pair<int, int> v = factor(n);

    if(v.first==0){
        v.first++;
    }

    cout << v.first << endl;

    for (int i = 0; i < v.first - 1; i++)
    {
        cout << v.second << " ";
    }

    while(v.first--){
        n/=v.second;
    }

    cout << v.second * n << endl;

    return;
}

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
