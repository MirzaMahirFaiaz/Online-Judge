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

    ll t,i,j,n;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        ll ans = n;
        if(n==1)
            ans=0;
        else
        {
            for(i=2;i*i<=n;i++)
            {
                if (n%i==0)
                    ans-=ans/i;
                while(n%i==0)
                    n/=i;
            }
            if (n!=1)
                ans-=ans/n;
        }
        cout<<ans<<endl;
    }

    return 0;
}
