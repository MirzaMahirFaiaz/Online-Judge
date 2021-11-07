//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll bigmodRecur ( ll b, ll p, ll m )
{
    if (p==0)
        return 1%m;

    if ( p%2 == 0 )
    {
        ll y = bigmodRecur ( b, p / 2, m );
        return ( y * y ) % m;
    }
    else
    {
        return ( b*bigmodRecur(b, p - 1, m) ) % m;
    }
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,b,p,m;
    cin>>t;
    while(t--){
            cin>>b>>p>>m;
        ll res = bigmodRecur(b,p,m);
        cout<<res<<endl;;
    }

return 0;
}
