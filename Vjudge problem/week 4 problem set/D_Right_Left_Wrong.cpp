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
    int n;
    cin>> n ;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
    }
    string s;
    cin>> s ;

    for (int i = 1; i < n; i++)
    {
        a[i] = a[i-1] + a[i];
    }
    


    long long int sum = 0;

    int l = 0;
    int r = n-1;

    while (l<r)
    {
        if(s[l] != 'L'){
            l++;
        }else if (s[r] != 'R')
        {
            r--;
        }else if (l == 0)
        {
            sum+=a[r];
            l++;
            r--;
        }else
        {
            sum += a[r] - a[l-1];
            l++;
            r--;
        }
        
    }
    

    
    cout<< sum<<endl ;
    
    
    
    
}



return 0;
}
