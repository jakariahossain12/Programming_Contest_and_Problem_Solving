#include<bits/stdc++.h>
using namespace std;

int main(){

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

    for (int i = 0; i < n; i++)
    {
        int l;
        string s;
        cin>> l >> s ;

        for (int j = 0; j < l; j++)
        {
            if(s[j] == 'D'){
                if(a[i] == 9){
                    a[i] = 0;
                }else
                {
                    a[i]++;
                }
            }else
            {
                if(a[i] == 0){
                    a[i] = 9;
                }else{
                    a[i]--;
                }

                
            }
            
            
        }
        cout<<a[i]<<" " ;
        
        
    }
    
    cout<< "\n" ;
    
    
}


return 0;
}
