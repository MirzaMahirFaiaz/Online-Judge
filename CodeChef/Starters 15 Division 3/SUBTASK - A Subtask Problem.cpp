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

    ll t,i,j,n,m,k;
    ll ar[101];
    cin>>t;
    while(t--){
            ll flagfz=0,flagao=1;
            cin>>n>>m>>k;
    for(i=0;i<n;i++){
        cin>>ar[i];
    if(ar[i]==0)
        flagao=0;
    }
    for(i=0;i<n;i++){
       if(ar[i]==0){
        flagfz=i;
        break;
       }
    }
    if(flagao==1)
        cout<<"100"<<endl;
    else if(flagfz+1>m)
        cout<<k<<endl;
    else
        cout<<"0"<<endl;

    }
return 0;
}
