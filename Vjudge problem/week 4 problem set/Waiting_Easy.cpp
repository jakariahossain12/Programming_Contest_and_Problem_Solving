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



    ll mx = 0;

    ll time = 0;



    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>> x ;

        if(x > mx){
            mx = x;
        }

        time += mx - x;
        
    }
    
    cout<< time<<endl ;
    
    
}



return 0;
}
