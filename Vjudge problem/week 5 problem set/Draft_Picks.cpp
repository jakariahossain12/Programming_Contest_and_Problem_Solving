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
    int n,k;
    cin>> n>>k ;

    vector<int> a(n,0);

    while (k>0)
    {
        for (int i = 0; i < n && k>0; i++)
        {
            a[i]+=k;
            k--;
        }
        
        for (int i = n-1; i >= 0 && k>0; i--)
        {
            a[i]+=k;
            k--;
        }
        
    }

    cout<< *max_element(a.begin(),a.end())<<endl ;
    
    
    
}



return 0;
}
