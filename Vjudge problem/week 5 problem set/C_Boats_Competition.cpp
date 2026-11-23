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
    for(auto &i : a)cin>> i ;

    sort(a.begin(),a.end());


    int ans = 0;

    for (int s = 2; s <= 2*n; s++)
    {
        int l = 0;int r =n-1;
        int cnt = 0;

        while (l < r)
        {
            int sum = a[l] + a[r];
            if(sum == s){
                cnt++;
                l++;
                r--;
            }else if (sum < s)
            {
                l++;
            }else{
                r--;
            }
            
        }
        ans = max(ans,cnt);
        
    }
    cout<< ans<<endl ;
    
    
}



return 0;
}
