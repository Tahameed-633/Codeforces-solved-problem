#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll lucky_count = 0;
    ll rem;


    while (n != 0)
    {
        rem = n % 10;
        if (rem == 4 || rem == 7)
        {
            lucky_count++;
        }
        n /= 10;
    }

    if (lucky_count == 0)
    {
        cout << "NO";
        return 0;
    }


    bool is_nearly_lucky = true;
    while (lucky_count != 0)
    {
        rem = lucky_count % 10;
        if (rem != 4 && rem != 7)
        {
            is_nearly_lucky = false;
            break;
        }
        lucky_count /= 10;
    }

    if (is_nearly_lucky)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
