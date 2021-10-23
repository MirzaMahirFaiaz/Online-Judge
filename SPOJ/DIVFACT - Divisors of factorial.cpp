//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define mod 1000000007
#define MAX	100000
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
    
    ll t,i,j,k,n,cnt=0,r,e,ans;
    cin>>t;
    while(t--){
          i=1;
          cin>>n;
          ans=1;
          while(1)
          {
                 if(i>n)
                 break;

                if(isPrime[i])
                {
                     r=i;
                     e=n;
                      cnt=0;
                     while(int(e/r)>0)
                     {
                           cnt+=int(e/r);
                           r*=i;
                     }
                  ans=(ans*(cnt+1))%mod;
                }
                i++;
          }
          cout<<ans%mod<<endl;
    }

return 0;
}
