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
    sieve();

    ll t,i,j,k,num;
    cin>>t;
    for(k=1;k<=t;k++){
            cin>>num;
            cout<<"Case "<<k<<": ";

    ll ans = 1;
    for (ll i = 0; i < Primes.size() && Primes[i] <= sqrt(num + 0.1); ++i) {
        if (num == 1)
            break;
        if(num % Primes[i] == 0) {
            ll cnt = 0;
            while (num % Primes[i] == 0) {
                num /= Primes[i];
                cnt++;
            }
            ans *= (cnt + 1);
        }
    }
    if (num != 1)
        ans *= 2;
        ans--;
    cout<<ans<<endl;

    }

return 0;
}
