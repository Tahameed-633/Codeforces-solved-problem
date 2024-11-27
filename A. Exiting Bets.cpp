#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << " " << 0 << endl;
        } else {
            ll d = abs(a - b);
            ll rem = a % d;
            ll moves = min(rem, d - rem);
            cout << d << " " << moves << endl;
        }
    }
    return 0;
}
