//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    ll t,i,n,j,nij,lif;

    cin>>t;

    for(i=1;i<=t;i++){
            ll ans=16+3;
        cin>>nij>>lif;
    ans=ans+(nij*4);
    if(nij>lif){
        j=lif;
        lif=nij;
        nij=j;
    }
    ans=ans+((lif-nij)*4);

        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
