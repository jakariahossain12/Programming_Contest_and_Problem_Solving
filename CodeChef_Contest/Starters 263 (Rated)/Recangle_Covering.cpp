#include<bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin>> t ;

while (t--)
{
    int n,m;
    cin>> n>>m ;

    vector<string> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i] ;
        
    }
    
    int minx = n, maxx = -1, miny = m, maxy = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == '1'){
                minx = min(minx,i);
                maxx = max(maxx,i);
                miny = min(miny,j);
                maxy = max(maxy,j);
            }
        }
        
    }

    cout<< (maxx - minx+1) * (maxy - miny +1) <<endl;
    
    
    
}



return 0;
}
