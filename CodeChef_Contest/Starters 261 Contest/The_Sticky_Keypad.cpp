#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool typeable(ll n,int d){
    string s = to_string(n);
    for(auto c : s){
        if(c - '0' == d){
            return false;
        }
    }
    return true;
}

int main(){

int t;
cin>> t ;
while (t--)
{
    ll n;
    int d;
    cin>> n>>d ;

    while (!typeable(n,d))
    {
        n++;
    }
    
    cout<< n<<"\n" ;
    
}



return 0;
}
