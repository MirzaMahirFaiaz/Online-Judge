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

    ll t,i,j,n, sum;
    cin>>n;
    sum = 0;
    if(n>0)
    {
        sum = (n*(n+1))/2;
    }
    else if(n<=0)
    {
        sum = ((n*(n-1))/2)*(-1);
        sum = sum + 1;
    }
   cout<<sum<<endl;

return 0;
}
