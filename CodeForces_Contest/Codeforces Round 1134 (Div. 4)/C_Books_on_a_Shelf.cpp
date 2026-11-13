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
    map<int,int> mp;

    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        mp[a[i]]++;
        
    }
    
    sort(a.begin(),a.end(),greater<int>());

    deque<int> dp;



    for ( int i = 0; i < n; i++)
    {
        if(dp.empty() || dp.front() > a[i]){
            dp.push_front(a[i]);
        }else
        {
            dp.push_back(a[i]);
        }
        
    }
    int ans = n;
    for(auto m : mp){
        int s = m.second;
        if(s > 2){
            ans-=(s-2);
        }
    }

    cout<< ans <<endl ;
    for (int i = 0; i < n; i++)
    {
        cout<< dp[i]<<" " ;
        
    }
    
    

    cout<< endl ;
    
    
}



return 0;
}
