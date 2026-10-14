#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>> t ;

while (t--)
{
    int n;
    cin>> n ;

    string s;
    cin>> s ;
    
    s = '#' + s;

    vector<int> m;

    vector<bool> p(n+1,false);

    for (int i = 1; i <= n; i++)
    {
        if(s[i] == '1'){
            m.push_back(i);
        }else if (s[i] == '2')
        {
            if(!m.empty()){
                int v = m.back();
                p[v] = true;
                m.pop_back();
            }else
            {
                p[i] = true;
            }
            
        }else
        {
            p[i] = true;
        }
        
        
    }
    
    vector<int> ans;

    for (int i = 1; i < p.size(); i++)
    {
        if(p[i] != true){
            ans.push_back(i);
        }
    }
    

cout<< ans.size()<<"\n" ;

    for(auto v:ans){
        cout<< v<<" " ;
        
    }
    cout<< "\n" ;
    



    
}




    
    





 


return 0;
}
