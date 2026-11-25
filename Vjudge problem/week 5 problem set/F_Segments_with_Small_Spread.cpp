#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

ll n,k;
cin>> n>>k ;

vector<ll> a(n);
for(auto &i:a)cin>> i ;

multiset<ll> st;
ll ans = 0;
ll l = 0, r= 0;

while (r<n)
{
    st.insert(a[r]);

        while (*st.rbegin() - *st.begin() > k)
        {
            st.erase(st.find(a[l]));
            l++;
        }
        ans+=r-l+1;
    
    r++;

}

cout<< ans ;





return 0;
}
