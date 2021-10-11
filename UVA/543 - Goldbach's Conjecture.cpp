//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	1000000
using namespace std;

bool isPrime[MAX + 5];
vector<int> Primes;

void seive(){
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

    ll t,i,j,n,tnp;
    seive();
    tnp = Primes.size();
    cin>>n;

    while(n){

            bool flag = false;
		for(i=0;i<tnp;i++){
			if( Primes[i] > n )
				break;
			if( isPrime[n - Primes[i]] ){
				cout << n<< " = " << Primes[i] << " + " << n - Primes[i] << endl;
				flag = true;
				break;
			}
		}
		if( !flag)
			cout << "Goldbach's conjecture is wrong." << endl;

        cin>>n;
    }
return 0;
}
