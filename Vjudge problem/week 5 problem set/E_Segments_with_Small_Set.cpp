#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,k;
cin>> n>>k ;

vector<int> a(n);
for(auto &i:a)cin>> i ;

map<int,int> mp;

int l = 0 ,r=0;
ll ans = 0;

while (r<n)
{
    mp[a[r]]++;

    while (mp.size() > k)
    {
        mp[a[l]]--;

        if(mp[a[l]] == 0){
            mp.erase(a[l]);
        }
        l++;
    }
    ans+=r-l+1;
    r++;
}
cout<< ans ;





return 0;
}
