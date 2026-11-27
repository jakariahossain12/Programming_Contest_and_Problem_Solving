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

    vector<int> a(n);

    int g = 0;

    for(auto &x:a){
        cin>> x ;

        g|=x;
        
    }

    int cnt = 0;
    int cur = 0;

    for (int i = 0; i < n; i++)
    {
        cur|=a[i];

        if(g == cur){
            cnt++;
            cur = 0;

        }
    }
    cout<< n-cnt<<endl ;
    
    
}



return 0;
}
