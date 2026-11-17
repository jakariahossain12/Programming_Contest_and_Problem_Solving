#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int c6 = 0;
    int c3 = 0;

    for (int i = 0; i < 5; i++)
    {
        int x;
        cin>> x ;

        if(x >= 60)c6++;
        if(x >= 30)c3++;
        
    }

    
    
    if(c6 >= 2 && c3 >= 4)cout<< "Pass"<<endl ;
    else cout<< "Fail"<<endl ;
    
    
    
    
}



return 0;
}
