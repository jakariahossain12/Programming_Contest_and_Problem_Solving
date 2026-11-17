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

    int ans = 0;
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if(a[i] > 0 ) sum+=a[i];

        int dans = sum - i;
        ans = max(dans,ans);

    }
    
    cout<< ans<<endl ;
    
    
}



return 0;
}
