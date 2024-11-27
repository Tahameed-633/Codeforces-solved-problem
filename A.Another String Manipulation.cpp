#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, a;
        cin >> n >> m;
        map<int, int> mp;

        for(int i = 0; i < n; i++) {
            cin >> a;
            int minn = min(a, (m + 1) - a);
            int maxx = max(a, (m + 1) - a);
            if(mp[minn] == 0)
                mp[minn] = 1;
            else
                mp[maxx] = 1;
        }

        string s(m, 'B');
        for(int i = 1; i <= m; i++) {
            if(mp[i] == 1)
                s[i - 1] = 'A';
        }

        cout << s << endl;
    }
    return 0;
}
