//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

void sol(){
    ll n,a,b,i;
   cin>>n>>a>>b;

   ll left=n-b, right=a-1;;
   if(left>n/2 || right>n/2){
       cout<<-1<<endl;return;
   }

   vector<ll> ans(n);
   ll idx=0;
   for(i=b+1;i<=n;i++)
        ans[idx++]=i;

   for(i=1;i<a;i++)
        ans[n-i]=i;

   for(i=a;i<=b;i++)
        ans[idx++]=i;

   ll mnl=1e9,mxr=-1;

   for(i=0;i<n/2;i++)
        mnl=min(mnl,ans[i]);

   for(i=n/2;i<n;i++)
        mxr=max(mxr,ans[i]);

   if(mnl!=a || mxr!=b){
       cout<<-1<<endl;
       return;
   }

   for(ll x:ans)
        cout<<x<<" ";

   cout<<endl;

}

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
       sol();

}

return 0;
}
