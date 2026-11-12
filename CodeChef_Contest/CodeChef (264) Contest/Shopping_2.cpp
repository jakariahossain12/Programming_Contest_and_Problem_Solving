#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,d;
    cin>> n>>d ;

    vector<int> a(n),b(n);

    int aa = 0;
    int bb = 0;

    int c2 = 2*d;

    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        aa+=a[i];
        
    }

        for (int i = 0; i < n; i++)
    {
        cin>> b[i] ;
        bb+=b[i];
        
    }
    
    int ab = 0;

    for (int i = 0; i < n; i++)
    {
        ab += min(a[i],b[i]);
    }
    
    cout<< min({ab+c2,aa+d,bb+d})<<endl ;
    
    
}



return 0;
}
