#include<bits/stdc++.h>
using namespace std;

int main(){

string ap = "abcdefghijklmnopqrstuvwxyz";
string s ;
cin>> s ;
int l = s.length();
for (int i = 0; i < ap.length(); i++)
{
    int f = 0;
    
    for (int j = 0; j <l; j++)
    {
        if(ap[i] == s[j]){
            f = 1;
            break;
        }
    }
    if(f == 0){
        cout<< ap[i] ;
        return 0;
    }
}

cout<< "None" ;




return 0;
}
