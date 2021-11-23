//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll GCD(ll a, ll b )
{
    while ( b )
    {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,type,x,y,z,d,d2;
    cin>>t;
    while(t--){
            cin>>n>>type>>x>>y>>z;
             d = n*2 + 1;

        if(type==1)
        {
            if(x==z)
                d2 = x;
            else
                d2 = d-z;
        }
        else if(type==3)
        {
            if(x==z)
                d2 = x;
            else
                d2 = d-x;
        }
        else if(type==2)
        {
            if(x==z)
                d2=0;
            else
                d2 = d - (x+z);
        }
        else
        {
            if(x==z)
                d2=0;
            else
                d2 = d - (x+z);
        }

        ll g = GCD(d2, d);
        d2/=g;
        d/=g;

        cout<<d2<<" "<<d<<endl;
    }

return 0;
}
