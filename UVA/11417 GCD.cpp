//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll GCD(ll a, ll b)
{
    if(a%b==0)
        return b;
    a= a%b;
    return GCD (b,a);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n;

    while(1){
    ll g =0;
    cin>>n;
    if(n==0)
        break;
    for(i=1; i<n; i++){
        for(j=i+1; j<=n; j++)
        {
            g+=GCD(i,j);
        }
    }
        cout<<g<<endl;
    }
    return 0;
}
