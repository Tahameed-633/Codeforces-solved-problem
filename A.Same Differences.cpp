#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            x -= i;
            mp[x]++;
        }

        ll ans = 0;
        for (auto it : mp) {
            ll a = it.second;
            ans += (a * (a - 1)) / 2;
        }

        cout << ans << endl;
    }
    return 0;
}
