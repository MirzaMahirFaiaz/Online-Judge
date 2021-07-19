//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int ara[1001],k, cnt, j, tmp;

void square(int ara[])
{
    for(k=1; k<=32; k++)
        ara[k*k]=-1;
}

void devisor(int ara[])
{
    for(k=1; k<=1000; k++)
    {
        tmp = sqrt(k);
        for(j=1, cnt=0; j<=tmp; j++)
        {
            if(k%j==0)
                cnt++;
        }
        ara[k]+=(cnt*2);
    }
}

int main()
{
    int t, i, fnl[1001], n;
    cin>>t;

    int l=2; fnl[1] = 1;
    square(ara);
    devisor(ara);
    for(j=2; j<=32; j++)
    {
        for(k=1000; k>=2; k--)
        {
            if(ara[k]==j)
            {
                fnl[l]=k;
                l++;
            }
        }
    }
    for(i=1; i<=t; i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<fnl[n]<<endl;
    }
    return 0;
}



