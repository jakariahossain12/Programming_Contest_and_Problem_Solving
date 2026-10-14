#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    int n;
    cin>> n ;
    string s,s1;
    cin>> s ;
    cin>> s1 ;
    bool is_ok = true;
    for ( int i = 0; i < n; i++)
    {
        if(s[i] == 'R' && s1[i] == 'G' || s[i] == 'G' && s1[i] == 'R' || s[i] == 'B' && s1[i] == 'R' || s[i] == 'R' && s1[i] == 'B'){
            is_ok = false;
            break;
        }
    }
    
    if(is_ok){
        cout<< "YES"<<"\n" ;
        
    }else
    {
        cout<< "NO"<<"\n" ;
        
    }
    
    
    
    
}



return 0;
}
