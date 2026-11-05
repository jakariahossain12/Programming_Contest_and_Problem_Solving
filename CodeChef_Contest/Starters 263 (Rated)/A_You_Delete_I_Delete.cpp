#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;
while (t--)
{
    string s;
    cin>> s ;
    int one = 0;
    int zro = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(one == 0 && s[i] == '1'){
            s.erase(i,1);
            i=0;
            one++;
        }
        if(zro == 0 && s[i] == '0'){
            s.erase(i,1);
            i=0;
            zro++;
        }
        if(one == 1 && zro == 1) break;
    }
    
    cout<< s<<"\n" ;
    
}



return 0;
}
