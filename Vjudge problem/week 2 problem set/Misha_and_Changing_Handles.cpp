#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;
vector<string> op;
vector<string> np;
map<string,int>mp;
map<string,int>kmp;
while (n--)
{
    string key,value;
    cin>> key>>value ;

    mp[key]++;
    mp[value]++;
    kmp[key]++;
    
}





    for (auto it = mp.begin(); it != mp.end(); it++) {
    string word = it->first;

    if (it->second < 2 && kmp.count(word)) {
        op.push_back(word);
    }else if (it->second < 2)
    {
        np.push_back(word);
    }
    
}


    
    cout<< op.size()<<'\n' ;
    
    for (int i = 0; i < op.size(); i++)
    {
        cout<< op[i] << " "<<np[i] <<'\n' ;
        
    }
    

    



return 0;
}
