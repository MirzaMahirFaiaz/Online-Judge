//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define Max 10000000
using namespace std;

char prime[Max+1];
ll array1[1000000],p;
void sieve()
{
    ll i,j,x;
    for(i=0;i<=Max;i++)
        prime[i]=0;
    prime[0]=prime[1]=1;
    for(i=4;i<=Max;i+=2)
        prime[i]=1;

    x=sqrt(Max);
    for(i=3;i<=x;i+=2){
        for(j=i*i;j<=Max;j+=i)
            prime[j]=1;
    }
}

ll is_prime(ll n)
{
    ll i,x,check=0;
    x=sqrt(n);
    for(i=0;i<p,array1[i]<=x;i++){
            if(n%array1[i]==0){
                check=1;
                break;
            }
            }
    return check;
}

int main()
{
    sieve();
    ll a,b,i,j,m,array[100000],rslt1,rslt2,rslt3,rslt4,min,max,cnt;
    p=0;
    for(i=2;i<=Max;i++){
            if(prime[i]==0){
                array1[p++]=i;
            }
        }

    while(cin>>a>>b){
    if(a<=Max&&b<=Max){
                        cnt=0;
                        m=0;
                        for(i=a;i<=b;i++){
                            if(prime[i]==0){
                                array[m++]=i;
                                cnt++;
                            }
                        }

                    min=1000005;
                    max=0;
                    for(i=0;i<m-1;i++){
                        if(array[i+1]-array[i]<min){
                            min=array[i+1]-array[i];
                            rslt1=array[i];
                            rslt2=array[i+1];
                        }
                        if(array[i+1]-array[i]>max){
                            max=array[i+1]-array[i];
                            rslt3=array[i];
                            rslt4=array[i+1];
                        }
                    }
                    if(cnt>=2)
            cout<<rslt1<<","<<rslt2<<" are closest, "<<rslt3<<","<<rslt4<<" are most distant."<<endl;

            else
               cout<<"There are no adjacent primes."<<endl;
                    }
    else{
                m=0;
                cnt=0;
                for(i=a;i<=b;i++){
                    if(is_prime(i)==0){
                        array[m++]=i;
                        cnt++;
                    }
                }

                 min=1000005;
                 max=0;
                for(i=0;i<m-1;i++){
                if(array[i+1]-array[i]<min){
                    min=array[i+1]-array[i];
                    rslt1=array[i];
                    rslt2=array[i+1];
                }
                if(array[i+1]-array[i]>max){
                    max=array[i+1]-array[i];
                    rslt3=array[i];
                    rslt4=array[i+1];
                }
            }
            if(cnt>=2)
            cout<<rslt1<<","<<rslt2<<" are closest, "<<rslt3<<","<<rslt4<<" are most distant."<<endl;

            else
               cout<<"There are no adjacent primes."<<endl;
    }
    }
      return 0;
}
