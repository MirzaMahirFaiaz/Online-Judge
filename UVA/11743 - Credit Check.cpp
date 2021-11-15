//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,n,j,sum,oddsum,totalsum,k,r;

    int a,b,c,d;
  cin >>t;
  for(k=0;k<t;k++)
  {
  totalsum=0;
  for(i=0;i<4;i++)
  {
  sum=0;
    scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
     a*=2;
     c*=2;
  while(a>0)
  {
    r=a%10;
    a/=10;
    sum+=r;

  }
  while(c>0)
  {
    r=c%10;
    c/=10;
    sum+=r;

  }
  sum+=b;
  sum+=d;
  totalsum+=sum;

  }
  r=totalsum%10;
  if(r==0)
  cout <<"Valid"<<endl;
  else
  cout <<"Invalid"<<endl;

}

return 0;
}
