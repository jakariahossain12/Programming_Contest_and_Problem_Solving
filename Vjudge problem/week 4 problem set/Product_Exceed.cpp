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
    ll x,y,p;
    cin>> x>>y>>p ;

    int ans = 0;

    while (true)
    {
        if(x*y >= p) break;
        if(x < y)x++;
        else
        {
            y++;
        }
        ans++;

    }
    
    cout<< ans<<endl ;
    
}



return 0;
}
