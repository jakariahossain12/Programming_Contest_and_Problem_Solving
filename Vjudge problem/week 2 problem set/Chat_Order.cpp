
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    list<string> ls;
    unordered_map<string, list<string>::iterator> pos;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        auto it = pos.find(s);

        if (it != pos.end()) {
            ls.erase(it->second);
        }

        ls.push_front(s);
        pos[s] = ls.begin();
    }

    for (string s : ls) {
        cout << s << '\n';
    }

    return 0;
}
