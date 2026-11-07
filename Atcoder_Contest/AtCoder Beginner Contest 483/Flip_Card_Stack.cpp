#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    deque<int> dq;

    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }

    while (q--)
    {
        int k;
        cin >> k;

        vector<int> temp;

        
        for (int i = 0; i < k; i++)
        {
            int x = dq.front();
            dq.pop_front();

        
            temp.push_back(-x);
        }

        
        for (int x : temp)
        {
            dq.push_front(x);
        }
    }

    
    for (int x : dq)
    {
        cout << x << '\n';
    }

return 0;
}
