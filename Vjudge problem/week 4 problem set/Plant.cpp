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

    int h = 0;

    for (int i = 0; i < n; i++)
    {
        if(i+1 < n){
            h = max(h,min(a[i],a[i+1]));
        }
    }
    
    cout<< h<<endl ;
    
    
    
}



return 0;
}
