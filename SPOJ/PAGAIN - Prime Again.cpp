//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	10000005
using namespace std;

bool isPrime[MAX + 5];
vector<ll> Primes;

void sieve()
{
    for(ll i=3; i*i<=MAX; i+=2)
    {
        if(isPrime[i]==false)
        {
            for(ll j=i*i; j<=MAX; j+=2*i)
            {
                isPrime[j]=true;
            }
        }
    }
    Primes.push_back(2);
    for(ll i=3; i<=MAX; i=i+2)
    {
        if(isPrime[i]==false)
        {
            Primes.push_back(i);
        }
    }
}
void ans(ll n)
{
    for(ll i=0; Primes[i]*Primes[i]<=n; i++)
    {
        if(n%Primes[i]==0)
        {
            //cout<<"Exc->"<<Primes[i]<<endl;
            i=-1;
            n--;
        }
    }
    cout<<n<<endl;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    ll t,i,j,n;
    cin>>t;
    while(t--){
            cin>>n;
            ans(n-1);
    }
return 0;
}
