//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
 ll gcd(ll a,ll b)
{
    if (a%b==0)
        return b;
    return gcd(b,a%b);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll  n,ar[1000]= {0},i,m1=1,n1=0,k,t,m=0,r,r1;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
            m1=m1*ar[i];
        }
        m=m1*n;
        for(i=0; i<n; i++)
        {
            n1=n1+(m1/ar[i]);
        }
        m1=gcd(m,n1);

        if(m1==1)
            printf("Case %lld: %lld/%lld\n",k,m,n1);
        else
        {
            r=m/m1;
            r1=n1/m1;
            printf("Case %lld: %lld/%lld\n",k,r,r1);
        }
        m=0,n1=0,m1=1,r=0,r1=0;
    }

return 0;
}
