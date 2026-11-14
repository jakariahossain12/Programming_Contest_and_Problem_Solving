
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &i : a) cin >> i;

        int l = 0, r = n - 1;

        int L = 0, R = 1e9;
        bool is = true;

        while (l < r) {
            int s = min(a[l], a[r]);
            int mx = max(a[l], a[r]);

            if (s == mx) {
                l++;
                r--;
                continue;
            }

            if (mx - s != 2) {
                is = false;
                break;
            }

            L = max(L, s);
            R = min(R, mx - 1);

            l++;
            r--;
        }

        if (is && L <= R)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
