#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
string s;
cin>> n ;
cin>> s ;

int r_count = 0;
int r = 0;

for (int i = 0; i < n; i++)
{
    if(s[i] == 'R'){
        r++;
       if(r_count<r){
        r_count = r;
       }
    }else
    {
        r = 0;
    }
    
    
}

cout<< r_count ;






return 0;
}
