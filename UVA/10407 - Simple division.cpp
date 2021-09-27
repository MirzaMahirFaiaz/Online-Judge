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

ll arr[1008];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
   while ( cin>>arr[0]) {
        if ( arr[0] == 0 ) break;

        ll cur = 1;

        while ( 1 ) {
           cin>>arr[cur];
            if ( arr[cur] == 0 )
                break;
            else cur++;
        }

        ll g = 0;
        for ( i = 1; i < cur; i++ ) {
            ll dif = arr[i] - arr[i-1];
            g = gcd ( g, dif );
        }

        if ( g < 0 )
            g *= -1;
        cout<<g<<endl;
    }


return 0;
}
