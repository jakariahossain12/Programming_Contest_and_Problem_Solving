#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

int t;
cin>> t ;
while (t--)
{
    int n;
    ll m;
    cin>> n>>m ;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }
    
    sort(a.begin(),a.end());

    int g = 0;
    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        ll n_count = count+a[i];
        ll h_count = n_count * (n_count-1)/2;
        if(h_count <= m){
            count = n_count;
            g++;
        }else
        {
            break;
        }
        
    }
    
    cout<< g <<"\n" ;
    

}



return 0;
}
