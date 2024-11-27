#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> v;
    for (int i = 0; i < s.size(); i++) {

        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' &&
            s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' &&
            s[i] != 'y' && s[i] != 'Y') {
            //convert to lower case
            s[i] = tolower(s[i]);

            v.push_back('.');
            v.push_back(s[i]);
        }
    }


    for (char c : v) {
        cout << c;
    }
    cout << endl;

    return 0;
}
