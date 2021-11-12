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

    ll t,i,j,n;

    for(j=1;;j++){
            cin>>n;
        if(n<0)
         break;
         i=ceil(log(n)/log(2) );

        printf("Case %ld: %ld\n",j,i);
    }
return 0;
}
