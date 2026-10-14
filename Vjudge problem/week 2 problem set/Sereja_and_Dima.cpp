#include<bits/stdc++.h>
using namespace std;

int main(){

int n;

cin>> n ;

vector<int> a(n);

for (int i = 0; i < n; i++)
{
    cin>> a[i] ;
}

int l,r;
l = 0;
r = n-1;
int s = 0;
int d = 0;
bool is_t = true;
while (l<=r)
{
    if(is_t == true){
        int m = max(a[l],a[r]);
        s+=m;
        is_t = false;
    }else
    {
        int m = max(a[l],a[r]);
        d+=m;
        is_t = true;
    }

    if(a[l] > a[r]){
        l++;

    }else
    {
        r--;
    }
    

}

cout<< s <<" "<<d ;




return 0;
}
