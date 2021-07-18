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
    ll n,j,i,t,l,w,h;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        ll max=-999999,min=999999999,lmx,lmn;
        cin>>n;
        string ar[n];
        for(j=0; j<n; j++)
        {
            cin>>ar[j];
            cin>>l>>w>>h;
            l=l*w*h;
            if(l<min)
            {
                min=l;
                lmn=j;
            }
            if(l>max)
            {
                max=l;
                lmx=j;
            }

        }
        if(min==max)
        {
            cout<<"Case "<<i<<": no thief"<<endl;
        }
        else
            cout<<"Case "<<i<<": "<<ar[lmx]<<" took chocolate from "<<ar[lmn]<<endl;
    }

}
