#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

ll n,k;
cin>> n>>k ;

vector<ll> a(n);
for(auto &i:a)cin>> i ;

ll l = 0 , r = 0;
ll sum = 0;
ll ans = INT_MAX;

while (r<n)
{
    sum+=a[r];

    while (sum >=k)
    {
        ans = min(ans,r-l+1);
        sum-=a[l];
        l++;

    }

    r++;
    
}

if(ans == INT_MAX)cout<< -1 ;
else cout<< ans ;





return 0;
}
