#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>> n ;

vector<int> a(n);

for(auto &i : a)cin>> i ;

bool is = false;
int s = 10;
int l = 9;

for (int i = 0; i < n; i++)
{
    s = min(s , a[i]);
    if(a[i] == l)is = true;
}

if(is){
    cout<< s ;
    
}else
{
    cout<< -1 ;
    
}




return 0;
}
