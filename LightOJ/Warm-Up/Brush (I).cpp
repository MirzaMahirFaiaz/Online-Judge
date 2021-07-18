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
    ll t,i,j,n,ans;

    cin>>t;

    for(i=0;i<t;i++){
            ans=0;
           cin>>n;
    while(n--){
        cin>>j;
        if(j<0)
            continue;
        else
        ans=ans+j;
    }
      cout<<"Case "<<i+1<<": "<<ans<<endl;
    }

    return 0;
}

