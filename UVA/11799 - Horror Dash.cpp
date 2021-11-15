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

    ll t,i,j,in,n;
    cin>>t;
    for(i=1;i<=t;i++){
            ll max=-99;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>in;
        if(max<in)
            max=in;
    }
      cout<<"Case "<<i<<": "<<max<<endl;
    }
return 0;
}
