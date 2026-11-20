#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,k;
    cin>> n>>k ;

    string s;
    cin>> s ;
    
    

    int cn = 1;

    for (int i = 1; i < n; i++)
    {
        if(s[i] != s[i-1])cn++;
    }
    
    if(k >= cn)cout<< "YES"<<endl ;
    else cout<< "NO"<<endl ;
    
    



}



return 0;
}
