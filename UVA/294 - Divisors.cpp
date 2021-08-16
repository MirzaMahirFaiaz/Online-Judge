//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,l,u;
    cin>>t;
    while(t--){
        cin>>l>>u;

    ll num=0,numd=0;
    double tm,cont;
    for(int i=l;i<=u;i++){
            tm=pow(i,0.5);

      cont=0;
      for( j=1;j<=tm;j++){
        if(i%j==0){
          cont++;
          if(j<tm)
            cont++;
        }
      }
      if(cont>numd){
        numd=cont;
        num=i;
      }
    }
    cout<<"Between "<<l<<" and "<<u<<", "<<num<<" has a maximum of "<<numd<<" divisors."<<endl;
    }



return 0;
}
