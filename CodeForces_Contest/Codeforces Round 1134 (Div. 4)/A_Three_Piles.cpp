#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;
while (t--)
{
    int a,b,c;
    cin>> a>>b>>c ;



    int f = max(a,b) - min(a,b);
    int s = max(b,c) - min(b,c);

    if(f == 1 &&  s ==1){
        cout<< "YES"<<endl ;
        
    }else
    {
        cout<< "NO"<<endl ;
        
    }
    
    
}



return 0;
}
