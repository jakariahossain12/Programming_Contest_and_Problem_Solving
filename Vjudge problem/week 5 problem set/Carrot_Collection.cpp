#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;
while (t--)
{
    int n,l,r;
    cin>>n>>l>>r  ;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>> a[i] ;
        
    }
    

    int l_sum = 0;
    int r_sum = 0;

    for (int i = 1; i < l; i++)
    {
        l_sum+=a[i];
    }

    for (int i = r+1; i <= n; i++)
    {
        r_sum+=a[i];
    }
    
    cout<< max(l_sum,r_sum)<<endl ;
    
    
}



return 0;
}
