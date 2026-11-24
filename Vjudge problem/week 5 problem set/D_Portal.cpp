#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;
while (t--)
{
    int n,x,y;
    cin>> n>>x>>y ;

    vector<int> a(n);
    for(auto &i:a)cin>> i ;

    vector<int> ans;
    vector<int> mid ;

    for (int i = 0; i < x; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = y; i < n; i++)
    {
        ans.push_back(a[i]);
    }
    
    for (int i = x; i < y; i++)
    {
        mid.push_back(a[i]);
    }

    auto mn = min_element(mid.begin(),mid.end());
    rotate(mid.begin(),mn,mid.end());

    auto l = ans.begin();

    while (l!=ans.end() && mid[0]>*l)
    {
        l++;
    }

    ans.insert(l,mid.begin(),mid.end());

    for(auto v:ans){
        cout<< v<<" " ;
        
    }
    cout<< endl ;
    
    
}



return 0;
}
