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
    cin>> n ;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int odd = 0;

        for (int j = i; j < n; j++)
        {
            if(a[j] %2 == 1){
                odd++;
            }

            if(odd%2 == 0){
                int l = j - i +1;
                ans = max(ans,l);
            }
        }
        
    }
    
    cout<< ans<<'\n' ;
    
    
    
}



return 0;
}
