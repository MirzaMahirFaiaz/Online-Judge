//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    int T,rem;
    cin>>T;
    string s;
    long long int b,n,k,j;
    for(int i=1;i<=T;i++)

    {
        cin>>s>>b;

        int l=s.size();

        if(s[0]=='-')
        {
            j=1;
        }
        else
        {
            j=0;
        }
        if(b<0)
        {
            b=b*(-1);
        }
         n=0;
         int count=0;
         for(k=j;k<l;k++)
         {
             n=(s[k]-'0')+n*10;
             n=n%b;
         }
         if(n)
         {
             printf("Case %d: not divisible\n",i);
         }
          else
             printf("Case %d: divisible\n",i);
         }

         return 0;
    }
