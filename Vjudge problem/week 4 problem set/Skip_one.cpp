#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,k;
    cin>> n>>k ;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i] ;
        
    }
    
    int mx = 0;
    int cnt = 0;
    bool sp = true;
    int mony = k;

    for (int i = 0; i < n; i++)
    {
        mx = max(a[i],mx);
        if(mony >= a[i]){
            mony-=a[i];
        }else if (sp)
        {
            mony+=mx;
            mony-=a[i];
            sp = false;

        }else
        {
            break;
        }
        cnt++;
        
    }

    cout<< cnt<<endl ;
    
    
    
    
}



return 0;
}
