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

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        int n,l;
        cin>>n>>l;
        int ar[n+3];
        for(i=0;i<n;i++)
            cin>>ar[i];
        map<int,int>one,zero;
        for(i=0;i<n;i++)
        {
            int x=ar[i];
            for(j=0;j<l;j++)
            {
                if((x&1))one[j]++;
                else zero[j]++;

                x=(x>>1);
            }
        }
        ll ans=0;
        for( i=0;i<l;i++)
        {
            if(one[i]>zero[i])ans+=pow(2,i);
        }
        cout<<ans<<endl;
    }

return 0;
}
