//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	200
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

    ll t,i,j,n,cs,ans[110];

    cin>>t;

    for(cs=1;cs<=t;cs++){
        memset(ans,0,sizeof(ans));
    	cin>>n;
		for(i=2;i<=n;i++)
		{
			ll x=i;
			for(j=2;j<=x;j++)
			{
				if(x%j==0)
				{
					ll cnt=0;
					while(x%j==0)
					{
						cnt++;
						x/=j;
					}
					ans[j]+=cnt;
				}
				if(x==1)
				break;
			}
		}
		cout<<"Case "<<cs<<": "<<n<<" = ";
		cout<<"2 ("<<ans[2]<<")";
		for(i=3;i<=100;i++){
		if(ans[i])
		cout<<" * "<<i<<" ("<<ans[i]<<")";
		}
		cout<<endl;
    }

return 0;
}
