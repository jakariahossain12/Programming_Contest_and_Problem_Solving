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
    ll sum = 0;
    ll mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
        sum+=a[i];
        mx = max(mx,a[i]);

    }

    ll ans = sum - mx;

    for (int i = 0; i < n; i++)
    {
        ll n_sum = sum+a[i];
        ll n_mx = max(mx,2*a[i]);
        ans = max(ans , n_sum - n_mx);
    }
    
    cout<< ans<<endl ;
    
    
    
}



return 0;
}
