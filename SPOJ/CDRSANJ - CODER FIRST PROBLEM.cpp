//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll f(ll n) {
	if(n==1)
	 return 1;
    else if(n==0||n%2!=0)
     return 0;
    else if(n==2)
     return 2;
    else
     return(2+f(n/2));
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    cin>>t;
	cout<<f(t)<<endl;

return 0;
}
