#include<bits/stdc++.h>
using namespace std;

int main(){

string s,s1;
cin>> s ;
cin.ignore();
cin>> s1 ;
int c =0;
for (int i = 0; i < s.length(); i++)
{
    if(s[i] != s1[i]){
        c++;
    }
}

cout<< c ;




return 0;
}
