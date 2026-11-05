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

    int one = 0;
    int zero = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x ;
        
        if(x== 1) one++;
        if(x== 0) zero++;
    }
    
    if(zero > one){
        cout<< "Elsie"<<"\n" ;
        
    }else
    {
        cout<< "Bessie"<<"\n" ;
        
    }
    
    
}



return 0;
}
