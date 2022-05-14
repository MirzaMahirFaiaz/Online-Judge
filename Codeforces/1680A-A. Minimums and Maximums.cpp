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
    while(t--){
            ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        if(l1==l2)
            cout<<l1<<endl;
        else if(l1<l2 && r1>=l2)
            cout<<l2<<endl;
        else if(l1>l2 && l1<=r2)
            cout<<l1<<endl;
        else
            cout<<l2+l1<<endl;

    }



return 0;
}
