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

    ll t,i,j,n,k;
    cin>>t;
    while(t--)
    {

        cin>>n;
        ll arr[n+1];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        ll sum=arr[0],m=arr[0];
        for(i=1; i<n; i++)
        {
            k=(arr[i]-sum);
            sum+=k;
            m=max(m,k);

        }
        cout<<m<<endl;
    }

    return 0;
}
