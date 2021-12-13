//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	100000
using namespace std;

int arr[100001];

bool isPrime[MAX + 5];
vector<int> prime;

void sieve(){
	memset(isPrime, true, sizeof isPrime);
	isPrime[0] = false;
    isPrime[1] = false;
	ll i, j;
	for(i=2;i< MAX;i++){
		if( isPrime[i] ){
			prime.push_back(i);
			for (j = i*i; j <= MAX; j += i)
				isPrime[j] = false;
		}
	}
}

void segmentedSieve ( int a, int b ) {
    int i;
    if (a == 1)
        a++;

    int sqrtn = sqrt( b );

    memset (arr, 0, sizeof arr);
    ll sz = prime.size();
    for (i = 0;i < sz && prime[i] <= sqrtn; i++ ) {
        int p = prime[i];
        int j = p * p;

        if ( j < a )
            j = ( ( a + p - 1 ) / p ) * p;

        for ( ; j <= b; j += p ) {
            arr[j-a] = 1;
        }
    }

    int res = 0;
    for (i = a; i <= b; i++ ) {
        if ( arr[i-a] == 0 )
            cout<<i<<endl;
    }
    return;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    ll t,i,j;
    int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        segmentedSieve(a,b);
        cout<<endl;
    }

return 0;
}
