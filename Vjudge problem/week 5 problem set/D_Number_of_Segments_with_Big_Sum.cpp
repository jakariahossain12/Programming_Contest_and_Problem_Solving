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

ll sum = 0;
ll ans = 0;

ll l = 0 , r= 0;

while (r<n)
{
    sum+=a[r];

    while (sum >=k)
    {
        ans+= (n-r);
        sum-=a[l];
        l++;
    }
    r++;
}

cout<< ans ;



return 0;
}
