//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll gcd (ll a, ll b ) {
    while ( b ) {
        a = a % b;
        swap ( a, b );
    }
    return a;
}
ll lcm(ll a, ll b){
    return (a/gcd(a,b))*b;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,a,b,l,m,c,rest;
    cin>>t;
    for(i=1;i<=t;i++){
            cin>> a>> b>> l;
    cout<<"Case "<<i<<": ";

        m=  lcm(a,b);

        if(l%m)
            cout<<"impossible"<<endl;
        else
        {
            c=l/m;
            rest=gcd(c,m);

            while(rest>1)
            {
                m/=rest;
                c*=rest;
                rest=gcd(c,m);
            }

            cout<<c<<endl;
        }

    }

return 0;
}
