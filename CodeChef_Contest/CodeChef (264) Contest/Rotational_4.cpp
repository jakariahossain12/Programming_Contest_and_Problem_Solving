
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

            int f = i;
            int l = (i+1)%n;

            cout<< f << " "<<l<<endl ;
            


            int num = (s[i] - '0') * 10
                    + (s[(i + 1) % n] - '0');

            if (num % 4 == 0) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
