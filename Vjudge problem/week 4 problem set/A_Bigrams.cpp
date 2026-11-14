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

    bool is = false;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x ;

        if(x >= 3) is = true;

        if(x >=2){
            cnt++;
        }
    }

    if(cnt >= 2) is =true;

    if(is){
        cout<< "YES"<<endl ;
        
    }else
    {
        cout<< "NO"<<endl ;
        
    }
    
    
    
}



return 0;
}
