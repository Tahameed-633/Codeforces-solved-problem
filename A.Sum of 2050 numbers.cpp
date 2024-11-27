#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int answer = 0;

        while (n >= 2050)
        {
            answer++;
            ll x = 2050;
            while (x * 10 <= n)
            {
                x *= 10;
            }
            n -= x;
        }

        if (n != 0)
            cout << -1 << endl;
        else
            cout << answer << endl;
    }
    return 0;
}
