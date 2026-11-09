
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = count(s.begin(), s.end(), '1');

        if(s[0] == '0' || s[n-1] == '0' || cnt % 2 != 0){
            cout << "NO\n";
            continue;
        }

        string a = "", b = "";

        int p = 0;
        int zero = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == '1'){

                if(p < cnt / 2){
                    a += '(';
                    b += '(';
                }
                else{
                    a += ')';
                    b += ')';
                }

                p++;
            }
            else{

                if(zero % 2 == 0){
                    a += '(';
                    b += ')';
                }
                else{
                    a += ')';
                    b += '(';
                }

                zero++;
            }
        }

        cout << "YES\n";
        cout << a << "\n";
        cout << b << "\n";
    }

    return 0;
}
