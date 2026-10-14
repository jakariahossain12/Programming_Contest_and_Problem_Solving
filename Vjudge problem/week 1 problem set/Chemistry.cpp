#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    int n,k;
    cin>> n>>k ;

    string s;
    cin>> s ;

    vector<int> fre(26,0);

    for(char c:s){
        fre[c -'a']++;
    }
    
    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        if(fre[i]% 2 != 0){
            count++;
        }
    }
    
    if(k >= count - 1){
        cout<< "YES"<<"\n" ;
        
    }else
    {
        cout<< "NO"<<"\n" ;
        
    }
    



}



return 0;
}
