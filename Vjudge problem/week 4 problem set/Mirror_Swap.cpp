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

    vector<int> a(2*n);

    for (int i = 0; i < 2*n; i++)
    {
        cin>> a[i] ;
        
    }
    
    
    int ans = 0;


    
    for (int i = 0; i < n; i++)
    {
        ans+=max(a[i],a[2*n-i-1]);
    }
    
    cout<< ans<<endl ;
    
    
}



return 0;
}
