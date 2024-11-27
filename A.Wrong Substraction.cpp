#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int i = 1;
    while (i <= t)
    {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
        i++;
    }

    cout << n << endl;
    return 0;
}
