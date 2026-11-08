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

    unordered_map<int,set<int>> mp;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>> x ;
        mp[x].insert(i);
        
    }

    for( auto p : mp){
        if(p.second.size() == 1){
            cout<< *p.second.begin()<<endl ;
            break;
        }
    }
    
    
}



return 0;
}
