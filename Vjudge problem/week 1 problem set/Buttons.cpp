#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b;
cin>> a>>b ;


if(a == b) {
cout<< a+b ;
return 0;
}


if(a<b){
    int f = max(a,b);
    b--;
    int s = max(a,b);
    cout<<f+s  ;
    
}else
{
    int f = max(a,b);
    a--;
    int s = max(a,b);
    cout<<f+s  ;
}




return 0;
}
