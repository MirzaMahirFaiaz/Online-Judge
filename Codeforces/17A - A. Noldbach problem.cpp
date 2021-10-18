//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	10000
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

    ll t,i,j,n,k,cnt=0;
    cin>>n>>k;

    for(i=2; i<=n; i++)
    {
        if(isPrime[i]==0)
            continue;

        for(j=0; Primes[j]<i; j++)
        {
            if(Primes[j]+Primes[j+1]+1 == i){
                cnt++;
                break;
            }
        }
    }
    if(cnt<k)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

return 0;
}
