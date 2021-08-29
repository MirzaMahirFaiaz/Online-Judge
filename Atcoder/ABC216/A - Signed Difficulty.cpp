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
    double n;

    cin>>n;
    j=n;
    n=n-j;
    n*=10;
    i=n;
    if(i<=2)
        cout<<j<<"-"<<endl;
    else if(i<=6)
        cout<<j<<""<<endl;
    else
        cout<<j<<"+"<<endl;


return 0;
}
