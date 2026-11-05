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
    ll x,y,d;
    cin>> x>>y>>d ;

    ll lastx = -1e9, lasty = -1e9;

    ll nextx = x, nexty = y;

    while (true)
    {
        if(nextx <= nexty){

            if(nextx - lasty <= d){
                cout<< nextx<<endl ;
                break;
                
            }

            lastx = nextx;
            nextx +=x;
        }else
        {
            if(nexty - lastx <= d){
                cout<< nexty<<endl ;
                break;
                
            }
            lasty = nexty;
            nexty +=y;
        }
        
    }
    
    
}



return 0;
}
