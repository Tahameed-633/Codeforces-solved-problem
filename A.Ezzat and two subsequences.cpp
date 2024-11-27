#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        ll sum = 0;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            int z;
            cin>>z;
            sum += z;
            mx = max(mx, z);
        }

        double ans;
        if (n == 1) {
            ans = mx;
        } else {
            ans = (double)mx + (double)(sum - mx) / (n - 1);
        }

        printf("%.6lf\n", ans);
    }
}
