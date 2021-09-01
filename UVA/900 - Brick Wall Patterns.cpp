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

    ll t,i,j,n,m,o,p;

    ll pre[51];
    pre[0]=pre[1]=1;

    for(i=2;i<51;i++)
        pre[i]=pre[i-1]+pre[i-2];
    while(1){
        cin>>n;
        if(n==0)
            break;
        cout<<pre[n]<<endl;
    }
return 0;
}
