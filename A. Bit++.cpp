#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int x = 0; // Declare x outside the loop to maintain its value across test cases
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "x++" || s == "++x")
            x++;
        else if (s == "x--" || s == "--x")
            x--;
        cout << x << endl;
    }
    return 0;
}
