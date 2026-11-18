#include<bits/stdc++.h>
using namespace std;
# define ll long long
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
    map<ll,ll> mp;



    ll mx = 0;

    ll time = 0;



    for (int i = 0; i < n; i++)
    {

        cin>> a[i] ;
        
        if(mx<a[i]){
            mx = a[i];
        }
        mp[a[i]]++;

    }

    mx = 0;
    for(auto m : mp){
        if(mx <= m.second){
            mx = m.first;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] == mx ){
            a[i] = a[i + 1]+1;
        }
    }
    mx = 0;
    for (int i = 0; i < n; i++)
    {

        if(a[i] > mx){
            mx = a[i];
        }

        time += mx - a[i];
        
    }
    
    cout<< time<<endl ;
    
}



return 0;
}
