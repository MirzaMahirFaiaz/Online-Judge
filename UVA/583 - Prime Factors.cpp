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
int main() {


	sieve();
	ll sz= Primes.size();
	ll n,i,in;
	while (cin>>n) {
		if (n == 0) break;

		ll ar[50], m=0;
		in = n;
		if (n < 0) {
			ar[m++] = -1;
			n = -n;
		}
		for ( i = 0; i < sz; i++) {
			if (n== 1)
                break;
			while (n % Primes[i] == 0) {
				ar[m++] = Primes[i];
				n /= Primes[i];
			}
		}
		if (n > 1)
            ar[m++] = n;

		cout<<in<<" = "<<ar[0];
		for (i = 1; i < m; i++) {
			cout<<" x " <<ar[i];
		}
		cout<<endl;
	}
	return 0;
}
