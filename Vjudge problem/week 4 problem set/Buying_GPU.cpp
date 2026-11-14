#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int x,y,z;
    cin>> x>>y>>z ;

    if(y >= z){
        cout<< -1<<endl ;
        continue;
    }

    int e = 0;
    int p = x;
    int m = 0;
    

    while (true)
    {
        e+=z;
        p+=y;
        m++;
        if(e>=p)break;
    }
    


    
    cout<< m<<endl ;
    
}



return 0;
}
