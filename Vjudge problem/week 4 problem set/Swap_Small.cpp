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

    deque<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x ;
        if(x == 0){
            a.push_front(x);
        }else
        {
            a.push_back(x);
        
        }
        
        
    }

    for(auto v:a){
        cout<< v<<" " ;
        
    }
    cout<< endl ;
    
    
}



return 0;
}
