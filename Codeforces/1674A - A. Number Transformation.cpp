//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
            ll x,y;
        cin>>x>>y;
           if(y % x == 0){
               cout<<"1"<<" "<<(y / x)<<endl;
           }
           else{
               cout<<"0 0"<<endl;
           }
    }



return 0;
}
