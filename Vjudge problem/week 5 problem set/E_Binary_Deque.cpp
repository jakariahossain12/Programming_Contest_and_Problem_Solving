#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,s;
    cin>> n>>s ;

    vector<int> a(n);
    int total = 0;
   for (int i = 0; i < n; i++)
   {
        cin>> a[i] ;
        total+=a[i];
        
   }
   
   if(total < s){
    cout<< -1<<endl ;
    continue;
    
   }

    int l = 0; int r = 0;
    int sum = 0;
    int ans = -1;

    while (r<n)
    {
        sum+=a[r];
        if(sum == s){
            ans  = max(ans , r-l+1);
        }else{
            while (sum>s && l<=r)
            {
                sum-=a[l];
                l++;
            }
            
        }
        r++;
    }
    

    cout<< n-ans<<endl ;
    



    

    
    
    
}



return 0;
}
