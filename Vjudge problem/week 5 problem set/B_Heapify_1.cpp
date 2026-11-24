#include<bits/stdc++.h>
using namespace std;
#define ll long long

int check(ll x){
    while (x%2 == 0)
    {
        x/=2;
    }
    return x;
};


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

    for(auto &i:a)cin>> i ;


    bool is = true;

    for (int i = 0; i < n; i++)
    {
        if(check(i+1) != check(a[i])){
            is = false;
            break;
        }
    }
    
    if(is)cout<<"YES"<<endl ;
    else cout<< "NO"<<endl ;
    
    
    
}




return 0;
}
