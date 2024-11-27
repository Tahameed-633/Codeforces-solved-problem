#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int max_length = 1;
    char last_char = s[0];

    for (int i = 1; i < n; ++i) {
        if (s[i] != last_char) {
            max_length++;
            last_char = s[i];
        }
    }

    cout << max_length << endl;

    return 0;
}
