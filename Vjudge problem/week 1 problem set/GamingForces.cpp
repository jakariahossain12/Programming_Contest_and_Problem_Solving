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



    int one = 0;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin>> h ;

        if(h == 1){
            one++;
        }


        
        
    }

    cout<< n-one/2 <<"\n" ;










    // ? 2nd method
    // int count = n;
    // int one = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int h;
    //     cin>> h ;

    //     if(h == 1){
    //         one++;
    //     }

    //     if(one == 2){
    //         count--;
    //         one = 0;
    //     }
        
        
    // }

    // cout<< count <<"\n" ;
    
    
    
    

}


return 0;
}
