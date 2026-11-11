#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n;
    cin>> n ;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }

    int ans = 1e9;

    int l = 0;
    int r = 0;

    while (r<n)
    {
        if(r - l + 1 == 2){
            int sum = a[l] + a[r];
            ans = min(ans,sum);
            l++;
        }
        r++;
    }
    cout<< ans<<endl ;
    
    
    
}



return 0;
}
