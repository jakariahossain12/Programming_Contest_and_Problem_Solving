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
    map<int,int> mp;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x ;

        mp[x]++;

        c = max(c,mp[x]);
        
    }

    cout<< max(2*c-n,n%2)<<'\n' ;

    
}



return 0;
}
