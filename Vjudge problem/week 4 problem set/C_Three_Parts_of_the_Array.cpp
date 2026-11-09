#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>> n ;

vector<ll> a(n);

for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}

int l = 0, r = n-1;

ll lt = 0 , rt = 0;
ll ans = 0;

while (l<=r)
{
    if(lt < rt){
        lt+=a[l];
        l++;
    }else
    {
        rt+=a[r];
        r--;
    }
    if(lt == rt){
        ans = lt;
    }
    
}

cout<< ans ;



return 0;
}
