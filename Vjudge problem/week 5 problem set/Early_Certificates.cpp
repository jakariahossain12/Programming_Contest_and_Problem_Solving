#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int a,b;
    cin>> a>>b ;

    string s , ss;
    cin>> s ;
    cin>> ss ;

    int l = min(a,b);

    for (int i = 0; i <l ; i++)
    {
        if(s[i] == ss[i]){
            cout<< s[i] ;
            
        }else{
            break;
        }
    }
    cout<< endl ;
    
    
    
    
}



return 0;
}
