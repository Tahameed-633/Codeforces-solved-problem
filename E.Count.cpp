#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {

        int sum = 0;
        for (char c : s)
        {

            sum =sum+ c - '0';
        }


        cout << sum << endl;
    }

    return 0;
}
