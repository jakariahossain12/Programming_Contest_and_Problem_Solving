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

        vector<int> a(n);
        int sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        if(sum == x){
            cout << "NO\n";
            continue;
        }

        int curr = 0;
        

        for(int i = 0; i < n; i++){

            if(curr + a[i] == x){
                if(i + 1 < n){
                    swap(a[i], a[i+1]);
                }
                else{
                    break;
                }
            }

            curr += a[i];
        }


            cout << "YES\n";

            for(auto v : a){
                cout << v << " ";
            }
            cout << '\n';
        
        
    }

    return 0;
}