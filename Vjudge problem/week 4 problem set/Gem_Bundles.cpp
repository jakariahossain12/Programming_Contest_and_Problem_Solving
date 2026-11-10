#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;
while (t--)
{
    int r,b,g;
    cin>> r>>b>>g ;

    if(r<1 || b<1 || g<1){
        cout<< r*3 + b*3 + g*3<<endl ;
    }else
    {
        int f = min({r,b,g});
        cout<< f*10 + (r-f)*3 + (b-f)*3 + (g-f)*3<<endl ;
        
    }
    
    
}



return 0;
}
