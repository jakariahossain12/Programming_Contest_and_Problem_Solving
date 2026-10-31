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

    priority_queue<int> pq;

    for (int i = 1; i <= n; i++)
    {
        pq.push(i);
    }
    
    vector<pair<int,int>> v;

    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        v.push_back({a,b});
        int c = (a+b+1)/2;
        pq.push(c);
    }
    
    cout<< pq.top()<<'\n' ;
    
    for (auto p : v)
    {
        cout<< p.first <<" "<<p.second<<"\n" ;
        
    }
    

    
}



return 0;
}
