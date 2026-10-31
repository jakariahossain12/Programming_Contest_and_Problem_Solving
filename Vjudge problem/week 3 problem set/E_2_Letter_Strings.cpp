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
    int n;
    cin>> n ;

    map<string,ll> mp;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin>> s ;

        for(char c = 'a'; c <= 'k';c++){
            string temp = s;
            temp[0] = c;

            if(temp != s){
                ans+=mp[temp];
            }
            
            temp = s;
            temp[1] = c;

            if(temp != s){
                ans+=mp[temp];
            }


        }
        mp[s]++;
    }
    
    cout<< ans<<'\n' ;
    
    
}



return 0;
}
