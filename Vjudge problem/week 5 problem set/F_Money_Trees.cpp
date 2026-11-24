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
    ll n,k;
    cin>> n>>k ;

    vector<ll> a(n),h(n);


    for(auto &i:a)cin>> i ;
    for(auto &i:h)cin>> i ;

    ll sum = 0;
    ll ans = 0;
    ll l = 0,r= 0;

    while (r<n)
    {
        sum +=a[r];

        while (sum > k)
        {
            sum-=a[l];
            l++;
        }

        if(r>0 && h[r-1] %h[r] != 0){
            l = r;
            sum = a[r];
            while (sum > k)
            {
                sum-=a[l];
                l++;
            }
            
        }
        
        ans = max(ans,r-l+1);
        r++;
    }
    

    cout<< ans<<endl ;
    
    
}




return 0;
}
