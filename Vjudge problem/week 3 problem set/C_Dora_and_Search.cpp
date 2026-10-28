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
    deque<int> d(n+1);
    set<int> st;

    for (int i = 1; i <= n; i++)
    {
        cin>> d[i] ;
        st.insert(d[i]);

    }



    int l = 1;
    int r = n;
    bool is = true;
    while (l<r)
    {
        if(d[l] == *st.begin() || d[l] == *st.rbegin()){
            st.erase(d[l]);
            l++;
        }
        else if (d[r] == *st.begin() || d[r] == *st.rbegin()){
            st.erase(d[r]);
            r--;
        }else 
        {
            is = false;
            cout<< l << " "<<r<<'\n' ;
            break;
        }
        

    }
    if(is){
        cout<< -1<<'\n' ;
        
    }
    
    
}



return 0;
}
