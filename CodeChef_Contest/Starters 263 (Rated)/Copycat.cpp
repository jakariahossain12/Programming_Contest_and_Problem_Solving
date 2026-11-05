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
    string s;
    cin>> s ;

    if(is_sorted(s.begin(),s.end())){
        cout<< 0<<endl ;
        continue;
    }

    int zero = count(s.begin(),s.end(),'0');
    int one = count(s.begin(),s.end(),'1');
    if(s[n-1] == '0'){
        cout<< one<<endl ;
        continue;
    }

    bool is_back_one = false;
    int one_count = 0;

    for (int i = n-1; i >= 0; i--)
    {
        if(s[i] == '1' && is_back_one == false){
            one_count++;
        }



        if(s[i] == '0' && is_back_one == false){
            is_back_one = true;
            one_count = 0;
        }

        if(s[i] == '1' && is_back_one == true){
            one_count++;
        }



    }
    
    cout<< one_count<<endl ;
    
    
    
}



return 0;
}
