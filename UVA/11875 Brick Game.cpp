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

    ll t,i,j,n,ansi,in,ans;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        int cnt=0;
        cin>>n;
        ansi=(n+1)/2;

        while(n--)
        {
            cin>>in;
        cnt++;
            if(cnt==ansi)
                ans= in;
        }
        printf("Case %d: %ld\n",i,ans);

    }

    return 0;
}
