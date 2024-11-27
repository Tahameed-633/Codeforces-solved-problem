#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll cntt = 0;
        ll sum = 0;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll maxx = arr[0];
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (arr[i] > maxx) {
                maxx = arr[i];
            }
            if (sum - maxx == maxx) {
                cntt++;
            }
        }

        cout << cntt << endl;
    }
    return 0;
}
