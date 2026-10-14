#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    int n;
    cin>> n ;
    string s;
    cin>> s ;
    int l,r;
    l = 0;
    r = 0;
    int is_l = false;


    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'B' && is_l == false){
            l = i;
            r = i;
            is_l = true;
        }else if (s[i] == 'B' && is_l == true)
        {
            r = i;
        }
        
    }
    
    int b_count = 0;

    for (int i = l; i <= r; i++)
    {
        b_count++;
    }
    
    cout<< b_count<<'\n' ;
    

    
    
}


return 0;
}
