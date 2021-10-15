//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	10000001
using namespace std;

bool isPrime[MAX];
//vector<int> Primes;

void seive()
{
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = false;
    isPrime[1] = false;
    ll i, j;
    for(i=2; i< MAX; i++)
    {
        if( isPrime[i] )
        {
            //Primes.push_back(i);
            for (j = i*i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seive();
    ll t,i,j,m,n;
    cin>>t;
    while(t--){
        ll sum=0;
        cin>>n;
		for(i=0; i<=n; i++)
		{
			if(isPrime[i])
				sum+=i;
		}
		cout<<sum<<endl;
    }

return 0;
}
