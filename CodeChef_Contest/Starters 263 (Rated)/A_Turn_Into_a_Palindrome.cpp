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
    char c ;
    cin>> n>>c ;
    
    string s;
    cin>> s ;
    
    int l = 0;
    int r = n-1;

    int ans = 0;

    while (l<r)
    {
        if(s[l] != s[r]){
            if(s[l] != c) ans++;
            if(s[r] != c) ans++;
        }
        l++;
        r--;
    }
    
    cout<< ans<<"\n" ;
    

}



return 0;
}
