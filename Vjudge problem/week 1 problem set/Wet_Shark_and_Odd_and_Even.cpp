#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;

vector<int> a(n);

for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
    
}

int last = INT_MAX;
long long int sum = 0;

for (int i = 0; i < n; i++)
{
    sum+=a[i];
    if(last > a[i] && a[i]%2 != 0){
        last = a[i];
    }
}

if(sum%2 == 0){
    cout<< sum ;
}else{
    cout<< sum-last ;
    
}



return 0;
}
