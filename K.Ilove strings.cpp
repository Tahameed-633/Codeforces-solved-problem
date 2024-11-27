#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string S, T, U;
       cin>>S>>T;

        int i = 0, j = 0;
        while (i < S.size() || j < T.size()) {
            if (i < S.size()) {
                U += S[i++];
            }
            if (j < T.size()) {
                U += T[j++];
            }
        }

        cout << U << endl;
    }

    return 0;
}
