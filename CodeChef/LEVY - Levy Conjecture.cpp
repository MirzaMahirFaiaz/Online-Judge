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

    ll t,i,j;
    sieve();

    cin>>t;

    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        for(i=0; ; i++)
        {
            if( (2*Primes[i]) <n && isPrime[n-2*Primes[i]] == true){
                cnt++;
            }
            else if((2*Primes[i])>=n)
                break;
        }
        cout<<cnt<<endl;
    }

return 0;
}
