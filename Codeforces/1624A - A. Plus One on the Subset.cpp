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
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n+2];
        for(i=0;i<n;i++)
            cin>>ar[i];
        int ans=0;
        sort(ar,ar+n);
        for(i=0;i<n-1;i++)
        {
            ans+=ar[i+1]-ar[i];
        }
        cout<<ans<<endl;
    }

return 0;
}
