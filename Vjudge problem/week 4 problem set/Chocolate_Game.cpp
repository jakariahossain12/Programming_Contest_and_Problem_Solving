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

    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x ;
        sum+=x;

        if(x%2 != 0)cnt++;
        
    }

    if(sum% 2 == 0){
        cout<< sum - cnt/2<<endl ;
        
    }else
    {
        cout<< cnt/2<<endl ;
        
    }
    
    
    
}



return 0;
}
