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
        int ar[n+3];
        map<int,int>mp;
        for(int i=1;i<=n;i++)
            cin>>ar[i];
        int ind1=-1,ind2=-1;
        int mn=n+2;
        int mx=-1;
        for(int i=1;i<=n;i++)
        {
            if(mp[ar[i]]==0)mp[ar[i]]=i;
            else{
                int a=i;
                int b=mp[ar[i]];
                int ans=n-(a-b);

                mx=max(mx,ans);
                mp[ar[i]]=i;
            }
        }
       cout<<mx<<endl;
    }

return 0;
}
