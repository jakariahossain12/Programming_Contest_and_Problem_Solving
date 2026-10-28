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
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }
    
    int m;
    cin>> m ;
    
    while (m--)
    {
        string s;
        cin>> s ;
        unordered_map<char,int> mp;
        unordered_map<int,char> mp2;

        if(s.size() != a.size()){
            cout<< "NO"<<"\n" ;
            continue;
        }

        bool is = true;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            int x = a[i];
            if(mp.count(c) && mp[c]!= x){
                cout<< "NO"<<"\n" ;
                is = false;
                break;
            }
            if(mp2.count(x) && mp2[x] != c){
                cout<< "NO"<<"\n" ;
                is = false;
                break;
            }
            mp[c] = x;
            mp2[x] = c;
        }
        
        if(is){
            cout<< "YES"<<"\n" ;
            
        }
        
    }
    
    
    
}



return 0;
}
