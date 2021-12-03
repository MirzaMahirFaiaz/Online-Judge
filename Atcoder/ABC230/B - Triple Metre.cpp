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

    ll t,i,j;
    string st,str;
    str = "oxxoxxoxxoxxoxxoxxoxxoxx";
    cin>>st;
   if( str.find(st,0) != -1)
   {
      cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }

return 0;
}
