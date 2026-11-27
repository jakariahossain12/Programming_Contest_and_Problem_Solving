#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> n >> m;

        int ans = n;

        for (int win = 0; win <= n; win++) {
            int tie = m - 3 * win;

            if (tie >= 0 && win + tie <= n) {
                int lose = n - win - tie;
                ans = min(ans, lose);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}