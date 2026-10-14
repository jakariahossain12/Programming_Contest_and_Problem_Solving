#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>> t;
    cin.ignore();
    
    map<string,int>m;
    

while (t--)
{
    string s;
    getline(cin,s);
    m[s]++;

}

cout<< m.size() ;






return 0;
}
