#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;
while (t--)
{
    int n;
    cin>> n ;
    string s;
    cin>> s ;




    if (is_sorted(s.begin(), s.end())) {
        cout << 0 << "\n";
        continue;;
    }

    int ans = 0;
    int ones = 0;

    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones++;
        } else if (s[i] == '0' && ones > 0) {
            ans += ones;
            ones = 0; 
        }
    }

    cout << ans << "\n";
    
    
}



return 0;
}
