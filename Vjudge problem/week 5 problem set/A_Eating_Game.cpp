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
    for(auto &i:a) cin>> i ;

    int mx = *max_element(a.begin(),a.end());

    int co = count(a.begin(),a.end(),mx);
    cout<< co<<endl ;
    
    
    
}



return 0;
}
