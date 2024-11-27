#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '\\')
        {
            for (int j = 0; j < i; j++)
            {
                cout << s[j];
            }
            cout << endl;
            break;
        }
    }
    return 0;
}
