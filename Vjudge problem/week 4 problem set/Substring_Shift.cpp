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
    string s;
    cin>> s ;


    int cn = 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i] =='z'){
            s[i] = 'a';
            cn++;
        }else
        {
            if(cn > 0)break;
        }
        
        
    }
    
    cout<< s<<endl ;
    
    
    
}



return 0;
}
