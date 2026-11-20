#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int x,y;
    cin>> x>>y ;
    
    int tem = 0;

    while (x != y)
    {
        tem += ceil((double)x/10);
        x--;
    }
    
    cout<< tem<<endl ;
    

    
    
}



return 0;
}
