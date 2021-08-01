//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int cnt(long long n)
{
    int temp=0;
    for(long long i=1; i<=n; i*=2)
    {
        if(n & i)
            temp++;
    }
    return temp;
}

int main()
{
    ll t,cases=0,diff;
    cin>>t;

    while(t--)
    {
        ll n,ans;
        cin>>n;

        for(ll i=1; i<=n; i*=2)
            if(n & i)
            {
                ans=n+i;
                break;
            }

         diff=cnt(n)-cnt(ans);

        for(int i=0; i<diff; i++)
            ans+=(1<<i);

        printf("Case %d: %lld\n",++cases,ans);
    }
    return 0;
}
