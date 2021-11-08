//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll bigmod (ll b,ll p,ll m ) {
    int res = 1 % m, x = b % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m;
        p >>= 1;
    }
    return res;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<bigmod(a,b,10)<<endl;
    }

return 0;
}
