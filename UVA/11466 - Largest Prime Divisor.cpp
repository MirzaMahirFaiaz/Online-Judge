//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
 const int N=1e7;
 vector<ll> prime,mul;

 bool isPrime[100000000];

 void sieve()
 {
     for(ll i=3; i*i<=N; i+=2)
     {
         if(isPrime[i]==0)
         {
             for(ll j=i*i; j<=N; j+=2*i){
                 isPrime[j]=1;
             }
         }
     }
     prime.push_back(2);
     for(ll i=3; i<=N; i+=2)
     {
         if(isPrime[i]==0)
             prime.push_back(i);
     }

 }

 int main()
 {
     sieve();
     ll n,cnt=0,mx=0;

     while(cin>>n)
     {

         if(n==0)
             break;

         else
         {
             if(n<0)
             {
                 n=n*(-1);
             }

             for(ll i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
             {

                 if(n%prime[i]==0)
                 {
                     while(n%prime[i]==0)
                     {
                         n/=prime[i];
                     }

                     mul.push_back(prime[i]);
                 }
             }
             if(n>1)
             {
                 mul.push_back(n);
             }

             if(mul.size()>1)
             {
                 cout<<mul[mul.size()-1]<<endl;
             }
             else
             {
                 cout<<"-1\n";
             }
         }
         mul.clear();
     }
     return 0;
 }
