
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

        while (true) {
            int l = 0, r = n - 1;
            char big = 'a';

            while (l < r) {
                if (s[l] != s[r]) {
                    big = max(big, max(s[l], s[r]));
                }

                l++;
                r--;
            }

            if (big == 'a') break;

            for (char &c : s) {
                if (c == big) {
                    c--;
                }
            }

            ans++;
        }

        cout << ans <<endl;
    }

    return 0;
}
