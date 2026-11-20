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


    int l = 0;
    int r = n-1;

    while (l < r)
    {
        if(a[l] == a[r]);
        l++;
        r--;
    }
    
    if(l >= r){
        cout<< "NO"<<endl ;
    }
    

    
}



return 0;
}
