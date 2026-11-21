#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    for (int i = 0; i < n; i++) {
        bool is = true;

        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'o') {
                is = false;
                break;
            }
        }

        if (is) {
            cout << "Faucet " << i + 1 << '\n';
            return 0;
        }
    }


    for (int j = 0; j < m; j++) {
        bool is = true;

        for (int i = 0; i < n; i++) {
            if (a[i][j] == 'o') {
                is = false;
                break;
            }
        }

        if (is) {
            cout << "Drain " << j + 1 << '\n';
            return 0;
        }
    }
}