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

    ll t,i,j,c,d;
    double ans;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>c>>d;
        ans=((5*d)/9.0)+c;

        printf("Case %d: %.2lf\n",i,ans);
    }
return 0;
}
