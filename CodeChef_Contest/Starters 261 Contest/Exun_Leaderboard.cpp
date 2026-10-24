#include<bits/stdc++.h>
using namespace std;

int main(){

int x,y;
cin>> x>>y ;

int mx = max(x,y);
int mn = min(x,y);

cout<< (mx-mn) - 1 ;



return 0;
}
