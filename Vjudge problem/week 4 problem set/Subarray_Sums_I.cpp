#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>> n>>x ;

vector<ll> a(n);

for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}

int l = 0 ; 

ll sum = 0;

ll ans = 0;

for (int i = 0; i < n; i++)
{
    sum+=a[i];

    while (sum > x)
    {
        sum-=a[l];
        l++;
    }
    
    if(sum == x){
        ans++;
    }
}

cout<< ans ;




return 0;
}
