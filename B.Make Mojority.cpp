#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string seq;
        cin >> seq;

        bool canTransform = false;


        for (int i = 0; i < n;) {

            while (i < n && seq[i] == '0') {
                ++i;
            }


            int j = i;
            while (j < n && seq[j] == '1') {
                ++j;
            }


            if ((j - i) % 2 == 1) {
                canTransform = true;
                break;
            }


            i = j;
        }

        if (canTransform) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
