#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll i,n,j,t,a,b;
   cin>>t;

   for(i=1;i<=t;i++){
        n=0;
    cin>>a>>b;
    for(j=a;j<=b;j++){
            if(j%2!=0){
                n=n+j;
            }
   }
   cout<<"Case "<<i<<": "<<n<<endl;
   }
  return 0;
}

