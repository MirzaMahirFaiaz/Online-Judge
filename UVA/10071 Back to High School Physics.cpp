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

    ll t,i,j,v;
    // v = u + at
	// d = ut + .5 a t^2


    while(scanf("%d%d",&v,&t)!=EOF){

        printf("%d\n",v*2*t);
    }
return 0;
}
