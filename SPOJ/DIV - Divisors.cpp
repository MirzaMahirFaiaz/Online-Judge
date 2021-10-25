//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX 1000007
using namespace std;

ll  cnt ;
int divisor[MAX+5] ;
vector <int> primefactor[MAX+5] ;

void sieve()
{
    ll i,j;
    for(i=1;i<=MAX;i++)
    {
        for(j=i;j<=MAX;j+=i)
            divisor[j]++;
    }

    for(i=2;i<=MAX;i++)
    {
        if(primefactor[i].size()==0)
        {
            for(j=i;j<=MAX;j+=i)
                primefactor[j].push_back(i);
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,x;
    sieve();

    for(i=1;i<=MAX;i++)
    {
        x = divisor[i] ;
        if(primefactor[x].size()==2 && primefactor[x][0]*primefactor[x][1]==x)
        {
            cnt++;
            if(cnt%9==0)
               cout<<i<<endl;
        }
    }

return 0;
}
