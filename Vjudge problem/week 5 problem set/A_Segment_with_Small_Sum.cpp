#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n; ll k;
cin>> n>>k ;

vector<ll>a(n);
for(auto &i:a)cin>> i ;

int ans = 0;
ll sum = 0;

int l = 0; int r = 0;

while (r<n)
{
    sum+=a[r];
    if(sum <= k){
        ans = max(ans,r-l+1);
    }else{
        while (l<=r && sum> k)
        {
            sum-=a[l];
            l++;
        }
        ans = max(ans,r-l+1);
    }
    r++;
}

cout<< ans ;





return 0;
}
