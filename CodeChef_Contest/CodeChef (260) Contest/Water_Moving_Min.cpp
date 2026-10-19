#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    int n,k;
    cin>> n>>k ;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }
    
    sort(a.begin(),a.end());
    int count = 0;

    for (int i = 1; i <= k && i<n; i++)
    {
        count+=a[i];
    }
    

    cout<< count<<'\n' ;
    

    

    
}



return 0;
}
