#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 0;
        while (n != 0) {
            int z = n % 10;
            x = max(x, z);
            n /= 10;
        }
        cout << x << endl;
    }
    return 0;
}
