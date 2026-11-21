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

    for(auto &i : a)cin>> i ;


    bool pal = true;
    vector<int> fre(n+1,0);

    
    for (int i = 0; i < n; i++)
    {
        if(a[i] != a[n-i-1]){
            pal = false;
        } 
        fre[a[i]]++;
    }
    

    if(pal) cout<< "NO" <<endl;
    else    
    {
        int v = 1;

        for (int i = 1; i <= n; i++)
        {
            if(fre[i] == 0){
                v = i; break;
            }
        }
        
        cout<< "YES "<<v<<endl ;
        
    }
    
    

    
}



return 0;
}
