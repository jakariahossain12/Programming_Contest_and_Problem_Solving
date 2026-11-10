#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,x,y;
    cin>> n>>x>>y ;

    int f = x*3;

    if (n <= 3){
        cout<< x*n <<endl;
    }else
    {
        n = n-3;

        cout<< (y*n) + f<<endl ;
        
        
    }
    
    
}



return 0;
}
