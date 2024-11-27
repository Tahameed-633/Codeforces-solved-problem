#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;


    set<char> distinct_char;


    for(char ch : s) {
        distinct_char.insert(ch);
    }


    int cnt = distinct_char.size();


    if(cnt % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
