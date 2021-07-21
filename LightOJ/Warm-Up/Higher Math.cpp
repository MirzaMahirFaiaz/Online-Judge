//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    ll i,t,j,n,c,a,b,temp;
    double rt;
    vector<long long>vec;

    cin>>t;

    for(i=0; i<t; i++)
    {

        cin>>a>>b>>c;
        if(a>=b&&a>=c)
        {
            temp=a;
            a=c;
            c=temp;

        }
        else if(b>=a&&b>=c)
        {
            temp=b;
            b=c;
            c=temp;

        }
        rt=(double)a*(double)a+(double)b*(double)b;



        if((double)c==sqrt(rt))
        {
            cout<<"Case "<<i+1<<": "<<"yes"<<endl;
        }
        else
        {
            cout<<"Case "<<i+1<<": "<<"no"<<endl;
        }


    }
    return 0;
}
