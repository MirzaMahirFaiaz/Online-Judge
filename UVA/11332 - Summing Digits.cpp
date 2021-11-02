#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll SumOfDigits(ll n){
    int i;
    ll sum=0;
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
return sum;
}
int main()
{
    ll t,i,j,ans;


    while(1){
            cin>>t;
            if(t==0){
                return 0;
            }

        while(t>9){
            t=SumOfDigits(t);
        }
        ans=t;
       cout<<t<<endl;
    }
  return 0;
}
