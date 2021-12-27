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

    ll t,i,j,n,x,y;
    cin>>t;
    while(t--)
    {

        ll z=0;
        cin>>x>>n;
        y=n%4;
        if(y==1)
            z=-n;
        else if(y==2)
            z=1;
        else if(y==3)
            z=n+1;
        if(x&1)
            cout<<x-z<<endl;
        else
            cout<<x+z<<endl;

    }

    return 0;
}
