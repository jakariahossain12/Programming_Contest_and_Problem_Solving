#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;
while (t--)
{
    int n,p;
    cin>> n>>p ;

    string s;
    cin>> s ;

    int l = 0;

    for (int i = 0; i < p; i++)
    {
        if(s[i] != 'L')l++;
    }
    int r = 0;
    for (int i = p-1; i < n; i++)
    {
        if(s[i] != 'R')r++;
    }
    
    cout<< min(r,l)<<endl ;
    
    
    
}



return 0;
}
