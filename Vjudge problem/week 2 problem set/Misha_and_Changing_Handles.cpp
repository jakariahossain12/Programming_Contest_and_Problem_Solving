#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>> n ;
vector<pair<string,string>> hn(n);


for (int i = 0; i < n; i++)
{

    cin>> hn[i].first>>hn[i].second ;

}


for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i == j) continue;

        if(hn[i].first == hn[j].second){
            hn[j].second = hn[i].second;
            hn[i].second = "no";
        }
    }
    
}



int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(hn[i].second != "no") count++;
    }
    
    cout<< count<<'\n' ;
    

    for (int i = 0; i < n; i++)
    {
        if(hn[i].second != "no"){
            cout<< hn[i].first <<" "<< hn[i].second<<'\n' ;
        }
    }



return 0;
}
