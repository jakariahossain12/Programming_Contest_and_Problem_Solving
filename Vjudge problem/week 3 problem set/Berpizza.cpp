#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n;
cin>> n ;
set<pair<int,int>> st;
multiset<pair<int,int>> ml;
vector<int> ans;
int id = 1;
while (n--)
{
    int t;
    cin>> t ;

    if(t == 1){
        int money;
        cin>> money ;
        st.insert({id,money});
        ml.insert({money,-id});
        id++;

    }else if (t == 2)
    {
        int p = st.begin()->first,money = st.begin()->second;
        ans.push_back(p);
        st.erase(st.begin());
        ml.erase({money,-p});

    }else
    {
        int p = -ml.rbegin()->second,money = ml.rbegin()->first;
        ans.push_back(p);
        ml.erase(--ml.end());
        st.erase({p,money});
    }
    
    
    
}

for(auto v:ans){
    cout<< v<<" " ;
    
}

return 0;
}
