//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

bool isPrime(ll n){
    ll x = sqrt(n) , i;
    for(i = 2; i <= x; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

ll nRev(ll n){
    ll r = 0;
    while(n > 0){
        r = (r*10) + (n%10);
        n /= 10;
    }
    return r;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,rn;
    bool p,ep;
    while(cin>>n){

        ep = p = false;
        p = isPrime(n);
        rn = nRev(n);
        if(n != rn)
        ep = isPrime(rn);

        if(ep && p)
            cout << n << " is emirp."<<endl;
        else if(p)
            cout << n << " is prime."<<endl;
        else
            cout << n << " is not prime."<<endl;
    }
return 0;
}
