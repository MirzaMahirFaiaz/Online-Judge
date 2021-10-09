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

    ll t,i,j,m,n;
    while(cin>>m>>n){
       n=m*(n-1);
       m--;
       m+=n;
       cout<<m<<endl;
    }

return 0;
}
