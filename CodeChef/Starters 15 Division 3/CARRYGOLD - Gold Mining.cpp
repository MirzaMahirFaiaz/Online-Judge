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

    ll t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        n++;
        if(n*y<x)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

return 0;
}
