#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

ll n ,k;
cin>> n>>k ;

vector<ll> a(n);
for(auto &i:a)cin>> i ;

ll sum = 0;
ll ans = 0;

ll l = 0 ,r = 0;

while (r<n)
{
    sum+=a[r];
    if(sum<=k){
        ans+= r-l+1;
    }else{
        while (sum>k && l<=r )
        {
            sum-=a[l];
            l++;
        }
        ans+= r-l+1;
    }
    r++;

}
cout<< ans ;




return 0;
}
