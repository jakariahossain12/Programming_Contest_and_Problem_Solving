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

   int near = n;

   while (true)
   {
    near++;
    if(near%5 == 0)break;
    
   }
   
   
   
   if(n%3 == 0){
    cout<< 0 <<endl ;
    
   }else if ((n+1) % 3 == 0 || (near) %3 == 0)
   {
    cout<< 1<<endl ;
    
   }else
   {
    cout<< 2<<endl ;
    
   }
   
   
   
}



return 0;
}
