#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>> n ;

map<string,int> mp;

int i = 1;
while (n--)
{
    string s;
    cin>> s ;
    
   
    if(mp.find(s) != mp.end()){
        cout<< mp[s]<<'\n' ;
        
        
    }else
    {
        mp[s]=i;
        cout<< i<<"\n" ;
        i++;
    }
    
    
}


return 0;
}
