//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
//#include<stdio.h>
#include<bits/stdc++.h>
//#define ll long long
#define PI acos(-1)
using namespace std;

int gcd(int a,int b)
{
    if(a == 0)
        return b;
    return gcd(b%a,a);
}

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int t,i,j,a,b;
    //cin>>t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);

        int n = gcd(a,b);
        int res = 0;
        for(int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(n/i == i)
                    res++;
                else
                    res+= 2;
            }
        }

        printf("%d\n",res);
    }

    return 0;
}
