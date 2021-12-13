#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll revn(ll n){
   ll sum=0, i=0;
while(n!=0){

    sum= sum*10;
sum=sum+n%10;
n=n/10;

}
//cout<<sum<<endl;
return sum;
}

int main(){
    ll t,n1,n2,i,j,k;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n1>>n2;
        n1=revn(n1);
        n2= revn(n2);
        n2=n1+n2;
        n2=revn(n2);
        cout<<n2<<endl;

    }



  return 0;
}
