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

    ll t,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
            ll n;
    cin>>n;
        cout<<"Case "<<i<<": "<<floor(log2(n))+1<<"\n";
    }



return 0;
}
