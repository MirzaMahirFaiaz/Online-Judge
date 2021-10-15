
//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	1000000
using namespace std;

bool isPrime[MAX + 5];
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

    ll t,i,j,n,a,b;
    seive();

    cin>>n;


        ll flag=0;
        for (i=2; i<=n/2; i+=1)
        {
            if (!isPrime[i] && !isPrime[n-i])
            {
                a= i, b= n - i;
                flag=1;
                break;
            }
        }
        if(!flag)
            a=-1,b= -1;
        if(a== -1 && b == -1){
        cout<<"NO WAY!"<<endl;
    }
    else
    {
        cout<<a<<" "<<b<<endl;
    }

return 0;
}
