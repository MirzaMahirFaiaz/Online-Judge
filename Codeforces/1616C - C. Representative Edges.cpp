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

    ll t,i,j,tmp,n,ans;
    double k;
    cin>>t;
    while(t--)
    {

        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        tmp=0;
        ans=0;
        for(i=0; i<n-1; i++)
        {
            tmp=0;
            unordered_map<double,ll>mp;
            for(j=i+1; j<n; j++)
            {
                k=((a[j]-a[i])*1.0)/(i-j);
                mp[k]++;
                tmp=max(tmp,mp[k]);
            }
            ans=max(ans,tmp);
        }
        cout<<n-ans-1<<endl;
    }

    return 0;
}
