#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int n,m;

cin>> n>>m ;

vector<int> a(n+1);

for (int i = 1; i <= n; i++)
{
    cin>> a[i] ;
    
}
set<int> st;
vector<int> ans(n+1);

for (int i = n; i >=1; i--)
{
    st.insert(a[i]);
    ans[i] = st.size();
}


while (m--)
{
    int t;
    cin>> t ;

    cout<<  ans[t]<<"\n" ;
    

}





return 0;
}
