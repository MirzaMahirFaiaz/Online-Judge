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

    ll t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        ll n=0;
        if(x>a)
        {
            n+=(x-a);
        }
        if(y>b)
        {
            n+=(y-b);
        }
        if(c>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
