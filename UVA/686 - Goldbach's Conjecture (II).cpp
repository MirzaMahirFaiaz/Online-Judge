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

    ll t,i,j,n;
    seive();
    cin>>n;

	while(n) {
		ll x, y, ans = 0;
		for(i = 0; Primes[i] < n; i++) {
			x = Primes[i], y = n-x;
			if(x > y)
				break;
			if(isPrime[y] == true)
                    ans++;
		}
		cout<<ans<<endl;
		cin>>n;
	}

return 0;
}
