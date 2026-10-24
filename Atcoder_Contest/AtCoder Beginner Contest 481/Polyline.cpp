#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,k;
cin>> n>>k ;

vector<int> a(n);

for (int i = 0; i < n; i++)
{
   cin>> a[i] ;
   
}

int count = 0;

for (int i = 0; i < n; i++)
{
    if(a[i] == k)count++;
    if(i+1 < n){
        if((a[i] > k && a[i+1] < k) || (a[i]<k && a[i+1] > k)){
            count++;
        }
    }
}

cout<< count ;




return 0;
}
