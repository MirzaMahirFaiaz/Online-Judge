//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	1000000
using namespace std;

bool isPrime[MAX + 5];
vector<int> Primes;

void sieve(){
	memset(isPrime, true, sizeof isPrime);
	isPrime[0] = false;
    isPrime[1] = false;
	ll i, j;
	for(i=2;i< MAX;i++){
		if( isPrime[i] ){
			Primes.push_back(i);
			for (j = i*i; j <= MAX; j += i)
				isPrime[j] = false;
		}
	}
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n;
    sieve();
    ll sz = Primes.size();
    while(1){
        cin>>n;
        if(n==0)break;

        ll ans = n;

    for(i=0;i<sz && Primes[i]*Primes[i]<=n;i++)
    {
        if(n%Primes[i]==0)
        {
            while(n%Primes[i]==0)
                n/=Primes[i];
            ans -= (ans/Primes[i]);
        }
    }
    if(n>1)
        ans -= (ans/n);

        cout<<ans<<endl;

    }
return 0;
}
