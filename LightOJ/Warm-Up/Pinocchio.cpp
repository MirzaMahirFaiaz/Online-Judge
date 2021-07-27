//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ll t,n,i,j,ans,mx,mn,a;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        ans=0;
        cin>>n;
        int arr[n];
        for(j=0; j<n; j++)
            cin>>arr[j];
        a = arr[0]-2;
        ans = ceil(a/5.0);
        cout<<ans<<endl;
        for(j=1; j<n; j++)
        {
            a = arr[j]-arr[j-1];
            ans += ceil(a/5.0);
            cout<<a<<" "<<ans<<endl;
        }

        printf("Case %lld: %lld\n",i,ans);
    }

    return 0;
}
