//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    double x,y,r,a;
    ll t;
    cin>>t;
    while(t--){
        cin>> x>> y>> r;
         a = (x*x)+(y*y);
        a=sqrt(a);
        x=r+a;
        y=r-a;
        printf("%.2lf %.2lf\n",y,x);
    }
    return 0;
}
