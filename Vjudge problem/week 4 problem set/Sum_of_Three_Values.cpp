#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
ll x;
cin>> n>>x ;

vector<pair<ll,int>> a(n);
for (int i = 0; i < n; i++)
{
    cin>> a[i].first ;
    a[i].second = i+1;
}

sort(a.begin(),a.end());

bool is = true;

for (int i = 0; i < n; i++)
{
    int l = i+1;
    int r = n-1;

    bool st = false;

    while (l<r)
    {
        ll sum = a[i].first + a[l].first + a[r].first;

        if(sum == x){
            cout<< a[i].second << " "<< a[l].second<<" "<<a[r].second ;
            is = false;
            st = true;
            break;
        }else if (sum < x)
        {
            l++;
        }else
        {
            r--;
        }
    }
    
    if(st)break;
}

if(is){
    cout<< "IMPOSSIBLE" ;
    
}




return 0;
}
