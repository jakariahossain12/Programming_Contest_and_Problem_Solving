#include<bits/stdc++.h>
using namespace std;
#define ll long long


int n,w , a[21],b[21];

ll ans = 0;

void res (int i,ll sum_a,ll sum_b){
    if(i == n){
        ans = max(ans,sum_a);
        return;
    }
    res(i+1,sum_a,sum_b);
    if(sum_b + b[i] <= w){
        res(i+1,sum_a+a[i],sum_b+b[i]);
    }

};


int main(){


cin>> n>>w ;

for (int i = 0; i < n; i++)
{
    cin>> a[i] >>b[i];
    
}

res(0,0,0);
cout<< ans ;








return 0;
}
