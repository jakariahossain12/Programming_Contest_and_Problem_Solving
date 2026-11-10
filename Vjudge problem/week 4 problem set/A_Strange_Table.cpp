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
    ll n,m,x;
    cin>> n>>m>>x ;

    ll r = (x-1)%n;
    ll c = (x-1)/n;

    cout<< r*m+c+1<<endl ;
    
    
}



return 0;
}
