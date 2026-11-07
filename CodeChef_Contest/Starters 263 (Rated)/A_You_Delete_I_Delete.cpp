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
   
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0'){
            string temp = s;
            temp.erase(i,1);

            int p = temp.find('1');
            temp.erase(p,1);

            if(ans == "" || temp > ans){
                ans = temp;
            }
        }

    }
    
    cout<< ans<<"\n" ;
    
}



return 0;
}
