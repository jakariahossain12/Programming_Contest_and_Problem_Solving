
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int f = 1;
        int ans1 = 0, ans2 = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x % 2 != f)
                ans1++;

            if(x % 2 == f)
                ans2++;

            if(f == 0) f = 1;
            else f = 0;
        }

        cout << min(ans1, ans2) << '\n';
    }

    return 0;
}
