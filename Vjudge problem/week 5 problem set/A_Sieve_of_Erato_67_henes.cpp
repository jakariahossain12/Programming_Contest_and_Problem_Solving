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

    vector<int> a(n);
    for(auto &i : a)cin>> i ;

    int c = count(a.begin(),a.end(),67);

    if(c== 0)cout<< "NO"<<endl ;
    else cout<< "YES"<<endl ;
    
    
    
    
}



return 0;
}
