//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll factrial(ll n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    return n*factrial(n-1);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a==b&&b==c&&c==d)cout<<0<<endl;
        else if(b==c&&c==d&&a!=b)
            cout<<1<<endl;
        else if(a!=b&&a==c&&c==d)
            cout<<1<<endl;
        else if(a==b&&a==c&&c!=d)
            cout<<1<<endl;
        else if(a==b&&a==d&&c!=d)
            cout<<1<<endl;
        else
            cout<<2<<endl;

    }
    return 0;
}
