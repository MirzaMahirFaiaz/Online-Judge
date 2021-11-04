//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	1000000
using namespace std;

bool isPrime[MAX + 5],mark[MAX];
vector<int> Primes;

void sieve()
{
    memset(isPrime, true, sizeof isPrime);
    isPrime[0] = false;
    isPrime[1] = false;
    ll i, j;
    for(i=2; i< MAX; i++)
    {
        if( isPrime[i] )
        {
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

    ll t,i,j,cs,low,high,sz;
    sz= Primes.size();
    cin>>t;

    for(cs=1; cs<=t; cs++)
    {
        cin>>low>>high;
        ll counter=0;

        if(low==1)
        {
            low++;
        }
        if(low>high)
        {
            counter=0;
        }
        else
        {

            memset(mark,0,sizeof mark);
            for(i=0; i<sz&&Primes[i]<=high; i++)
            {
                j=(low/Primes[i])*Primes[i];
                if(j<low)
                {
                    j+=Primes[i];
                }
                if(j<MAX&&isPrime[j]==true)
                {
                    j+=Primes[i];
                }
                for(; j<=high; j+=Primes[i])
                {
                    if(j<low)
                        break;
                    mark[j-low]=1;

                }
            }
            for(i=low; i<=high; i++)
            {
                if(i<low)
                    break;
                if(mark[i-low]==false)
                    counter++;
            }
        }
        cout<<"Case "<<cs<<": "<<counter<<endl;

    }

    return 0;
}
