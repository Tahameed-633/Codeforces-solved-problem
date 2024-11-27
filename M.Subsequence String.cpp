#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "hello";
    int j = 0;
    bool is_equal = false;

    for (char ch : s) {
        if (ch == t[j]) {
            t[j++]=ch;
        }
        if (j == 5) {
            is_equal = true;
            break;
        }
    }

    if (is_equal) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
