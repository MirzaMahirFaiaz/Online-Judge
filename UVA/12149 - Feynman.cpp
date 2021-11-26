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

    ll ar[102];

    ll t,i,j,n,sum;
    for(i=1;i<101;i++){
        ar[i]=(i*i);
    }

    while(1){
            sum=0;
        cin>>n;
        if(n==0)
            return 0;
    for(i=1;i<=n;i++){
        sum+=ar[i];
    }
    cout<<sum<<endl;
    }
return 0;
}
