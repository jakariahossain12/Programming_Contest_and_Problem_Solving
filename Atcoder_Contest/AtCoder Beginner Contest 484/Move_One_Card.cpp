
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    int l = 0;

    while(l < n && a[l] == b[l]) {
        l++;
    }

    if(l == n) {
        cout << "Yes\n";
        return 0;
    }

    int r = n - 1;

    while(a[r] == b[r]) {
        r--;
    }

    
    bool ok1 = true;

    for(int i = l; i < r; i++) {
        if(a[i + 1] != b[i]) {
            ok1 = false;
        }
    }

    if(a[l] != b[r]) {
        ok1 = false;
    }

    
    bool ok2 = true;

    for(int i = l + 1; i <= r; i++) {
        if(a[i - 1] != b[i]) {
            ok2 = false;
        }
    }

    if(a[r] != b[l]) {
        ok2 = false;
    }

    if(ok1 || ok2) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
