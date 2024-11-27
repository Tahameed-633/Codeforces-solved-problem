#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        int s_len=s.length();
        int t_len=t.length();

        bool possible = false;
        for (int i = 0; i <= s_len - t_len; ++i) {
            string temp = s;
            bool valid = true;

            for (int j = 0; j < t_len; ++j) {
                if (temp[i + j] == '?' || temp[i + j] == t[j]) {
                    temp[i + j] = t[j];
                } else {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                int k = 0, l = 0;
                while (k < temp.length() && l < t.length()) {
                    if (temp[k] == t[l]) {
                        l++;
                    }
                    k++;
                }
                if (l == t.length()) {
                    possible = true;
                    for (int m = 0; m < s_len; ++m) {
                        if (temp[m] == '?') temp[m] = 'a';
                    }
                    cout << "YES\n" << temp << "\n";
                    break;
                }
            }
        }

        if (!possible) {
            cout << "NO\n";
        }
    }
    return 0;
}

