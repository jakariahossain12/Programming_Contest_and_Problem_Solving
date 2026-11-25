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
    for(auto &i:a)cin>> i ;

    map<int,int>mp,fre;
    

    for(auto x : a){
        int cnt = 0;

        while (true)
        {
            mp[x]+=cnt;
            fre[x]++;
            if(x == 0)break;
            x/=2;
            cnt++;

        }
        
    }
    
    int ans = INT_MAX;

    for(auto v:mp){
        if(n == fre[v.first]){
            ans = min(ans,v.second);
        }
    }
    cout<< ans<<endl ;
    
}



return 0;
}
