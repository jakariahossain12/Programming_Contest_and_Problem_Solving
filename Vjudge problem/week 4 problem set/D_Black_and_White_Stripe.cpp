#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,k;
    cin>> n>>k ;
    string s;
    cin>> s ;
    

    int l = 0, r= 0;
    ll ans = 1e9;
    ll cnt = 0;
    while (r<n)
    {
        if(s[r] != 'B')cnt++;
        if(r-l+1 == k){
            ans = min(ans,cnt);
            if(s[l] != 'B')cnt--;
            l++;
        }
        r++;
    }
    
    cout<< ans<<endl ;
    

}



return 0;
}
