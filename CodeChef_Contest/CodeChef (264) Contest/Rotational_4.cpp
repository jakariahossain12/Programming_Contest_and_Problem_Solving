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

        string s;
        cin >> s;

        int ans = 0;

        for (int i = 0; i < n; i++) {

            int lastTwo = (s[n - 2] - '0') * 10
                        + (s[n - 1] - '0');

            if (lastTwo % 4 == 0) {
                ans++;
            }

            rotate(s.begin(), s.begin() + 1, s.end());
        }

        cout << ans << '\n';
    }

    return 0;
}