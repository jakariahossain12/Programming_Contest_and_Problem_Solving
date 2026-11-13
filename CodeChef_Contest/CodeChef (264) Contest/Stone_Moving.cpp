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
    ll n;
    cin>> n ;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }
    
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll x = min(a[i],n-i-1);
        ans+=x;

        for (int j = i+1; j <= i+x; j++)
        {
            a[j]++;
        }
        a[i]-=x;
    }
    
    cout<< ans<<endl ;
    
}



return 0;
}
