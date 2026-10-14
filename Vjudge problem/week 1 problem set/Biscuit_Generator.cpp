#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b,t;

cin>> a>>b>>t ;

int c = 1;
int bcount = 0;

while (a*c <= t)
{
    bcount+=b;
    c++;
}
cout<< bcount ;





return 0;
}
