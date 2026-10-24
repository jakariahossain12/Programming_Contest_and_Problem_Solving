#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int idx = -1;
        
        for (int i = 0; i < (int)s.size() - 1; i++) {
            if (s[i] == s[i+1]) {
                idx = i;
                break;
            }
        }

        char ch;
        if (idx != -1) {
            
            ch = s[idx] + 1;
            if (ch > 'z') {
                ch = 'a';
            }
            s.insert(idx + 1, 1, ch);
        } else {
            
            ch = s[0] + 1;
            if (ch > 'z') {
                ch = 'a';
            }
            s.insert(0, 1, ch);
        }

        cout << s << "\n";
    }

    return 0;
}