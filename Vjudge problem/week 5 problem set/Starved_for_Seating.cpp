#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int total = 0;

        for (auto &x : a) {
            cin >> x;
            total += x;
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int sum = total / 2 + a[i] / 2 + a[j] / 2;

                if (sum > k) {
                    ans++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}