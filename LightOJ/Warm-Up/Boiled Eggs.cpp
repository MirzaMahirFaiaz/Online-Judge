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
    ll n,p,q,t,i,j;

    cin>>t;

    for(i=0;i<t;i++){
        cin>>n>>p>>q;

        int ar[n], cn=0, sum=0;
        for(j=0; j<n ;j++)
        {
            cin>>ar[j];
            sum += ar[j];
            if(cn<p && sum<=q) cn++;
        }
        cout<<"Case "<<i<<": "<<cn<<endl;
    }
return 0;
}
