//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    //cout<<"binpow"<<res<<endl;
    return res;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,k;
    while(1)
    {
        cin>>n>>k;
        if(n==0&&k==0 )
            return 0;
        else
        {
            ll s1, s2,s3,s4;
            s1 = (2 * binpow(n-1,n-1,10000007) ) % 10000007;
            s2 = (2 * binpow(n-1,k,10000007) ) % 10000007;
            s3 = binpow(n,k,10000007);
            s4 = binpow(n,n,10000007);
            ll res = (s1 + s2 +s3 + s4) % 10000007;
            cout<<res<<endl;
        }
    }

return 0;
}
