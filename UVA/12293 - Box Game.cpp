//Incomplete
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

    ll t,i,j,n,a,b,cnt;
    while(1){
        cin>>n;
        if(n==0)
            return 0;
        a=n;
        b=1;
        cnt=0;
        while(a!=b){
          if(a>b){
            b=a/2;
            a=a-b;
            cnt++;
          }
          else{
            a=b/2;
            b=b-a;
            cnt++;
          }
        }
        if(cnt%2==0)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
return 0;
}
