#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        char current = s[i];
        int cnt = 0;
        while (s[i] == current && i < s.size())
        {
            cnt++;
            i++;
        }
        i--;
        freq[current - 'a'] += cnt;
    }


    for (char c = 'a'; c <= 'z'; c++)
    {
        if (freq[c - 'a'] > 0)
        {
            cout << c << " : " << freq[c - 'a'] <<endl;
        }
    }

    return 0;
}
