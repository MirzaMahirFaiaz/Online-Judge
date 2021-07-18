//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll digits(ll n,ll base){
    if(n<0)
        return 0;
    else if(n<=1)
    return 1;
    double x = ((n * (log(n / M_E)/log(base)) +(log(2 * M_PI * n)/log(base)) /2.0));
    return floor(x) + 1;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,k,t,ans,base;

    cin>>t;

    for(i=0;i<t;i++){
        cin>>n>>base;


     ans=digits(n,base);
     cout<<"Case "<<i+1<<": "<<ans<<endl;
    }
    return 0;
}
