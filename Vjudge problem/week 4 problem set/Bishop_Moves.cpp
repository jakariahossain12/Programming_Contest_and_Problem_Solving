#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int x1,y1,x2,y2;
    cin>> x1>>y1>>x2>>y2 ;

    int f = x1+y1;
    int s = x2+y2;

    if(f == s || x1-y1 ==  x2-y2){
        cout<< 1<<endl ;
        
    }else
    {
        if(f % 2 == s%2){
            cout<< 2<<endl ;
            
        }else
        {
            cout<< -1<<endl ;
            
        }
        
    }
    
    
}



return 0;
}
