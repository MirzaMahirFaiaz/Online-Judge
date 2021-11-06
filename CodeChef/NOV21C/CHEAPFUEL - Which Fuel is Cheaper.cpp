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

    ll t,i,j,x,y,a,b,k;

    cin>>t;
    while(t--){

    cin>>x>>y>>a>>b>>k;
    a*=k;
    b*=k;
    x+=a;
    y+=b;
    if(x<y)
        cout<<"PETROL"<<endl;
    else if(y<x)
        cout<<"DIESEL"<<endl;
    else
        cout<<"SAME PRICE"<<endl;
    }

return 0;
}
