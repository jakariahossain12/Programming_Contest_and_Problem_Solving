#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,m,x;
    cin>> n>>m>>x ;

    int row = ceil((double)x/m);

    int f = row - 1+1;
    int l = n - row +1;
    cout<< min(f,l)<<endl ;
    
    
}



return 0;
}
