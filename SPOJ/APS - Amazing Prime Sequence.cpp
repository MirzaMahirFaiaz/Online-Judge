//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX 10000003
using namespace std;

ll factor[MAX],ans[MAX];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i,j,t;

    for(i=2; i<=10000000; i++)
    {
        if(factor[i]==0)
        {
            factor[i] = i;
            for(j=i*i; j<=10000000; j+=i)
            {
                if(factor[j]==0) factor[j] = i;
            }
        }
        ans[i] = ans[i-1] + factor[i];
    }

    cin>>t;
    while(t--)
    {
        cin>>i;
       cout<<ans[i]<<endl;
    }
    return 0;
}
