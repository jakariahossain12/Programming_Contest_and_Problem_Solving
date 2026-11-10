#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>> n>>x ;

map<ll ,ll> mp;

ll ans = 0;
ll sum = 0;
mp[0] = 1;
for (int i = 0; i < n; i++)
{
    ll v;
    cin>> v ;


    sum+=v;
    ll f = sum - x;
    ans+=mp[f];
    mp[sum]++;
    
}
cout<< ans ;








return 0;
}
