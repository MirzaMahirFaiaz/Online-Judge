//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll gh(ll m, ll n){
    if (m%n==0)
     return n;
    else
        return gh(n,m%n);
}

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

        ll a,b,result,uc,time,i;
      cin>>time;
      for (i=1;i<=time;i++)
      {
          cin>>a>>b;
          if (a==b)
           result=2;
          else if (a==0 || b==0)
            result=1;
          else
          {
              uc=gh(a,b);
              result = a/uc + b/uc;
          }
          cout<<"Case "<<i<<": "<<result<<endl;
      }
      return 0;
}
