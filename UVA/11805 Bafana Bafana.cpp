#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i,l,t,n,k,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        l=p%n;

    if(l>n-k)
        printf("Case %lld: %lld\n",i,(p+k-n)%n);

    else if(l==n-k)
    {
        printf("Case %lld: %lld\n",i,n);
    }
    else if(l<n-k)
    {
        printf("Case %lld: %lld\n",i,k+l);
    }

    }

    return(0);
}
