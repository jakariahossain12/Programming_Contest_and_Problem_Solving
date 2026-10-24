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
    vector<bool> f(s.size(),false);
    vector<int> l,u;
    string ans;

    for (int i = 0; i < (int)s.size() ; i++)
    {
        char c = s[i];
        if(c == 'b'){
            if(!l.empty()){
                f[l.back()] = true;
                l.pop_back();
            }

        }else if (c == 'B')
        {
            if(!u.empty()){
                f[u.back()] = true;
                u.pop_back();
            }
        }else
        {
            if(islower(c)){
                l.push_back(i);
            }else
            {
                u.push_back(i);
            }
            
        }
        
        
    }
    
    for (int i = 0; i < (int)s.size(); i++)
    {
        if(!f[i] && s[i] != 'b' && s[i] != 'B'){
            ans+=s[i];
        }
    }
    
    cout<< ans<<"\n" ;
    
    
}



return 0;
}
