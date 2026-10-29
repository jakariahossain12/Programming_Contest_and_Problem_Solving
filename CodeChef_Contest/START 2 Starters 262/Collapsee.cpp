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
    int n;
    cin>> n ;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }

    ll count = 0;

    for (int i = 0; i < n-2; i++)
    {
        count+=abs(a[i]);
    }
    
    cout<< count-a[n-2]+ a[n-1]<<'\n';
    
    
    
}



return 0;
}
