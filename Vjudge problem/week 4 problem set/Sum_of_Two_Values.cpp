#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,x;
cin>> n>>x ;
bool is_f = true;
map<int ,int> mp;

for (int i = 0; i < n; i++)
{
    int v;
    cin>> v ;

    int f = x - v;

    if(mp.find(f) != mp.end()){
        cout<< mp[f]+1 <<" "<<i+1 ;
        is_f = false;
        break;
    }
    mp[v]=i;
}

if(is_f){
    cout<< "IMPOSSIBLE" ;
}




return 0;
}
