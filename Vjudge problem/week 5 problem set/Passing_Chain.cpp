#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int i = 1;

        while(i + x <= n){
            i = i + x;
        }

        cout << i << '\n';
    }

    return 0;
}