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

    ll t,i,j,cnt=1;
    string s;
    while(1){
      cin>>s;
      if(s=="Hajj")
        cout<<"Case "<<cnt<<": "<<"Hajj-e-Akbar"<<endl;
      else if(s=="Umrah")
        cout<<"Case "<<cnt<<": "<<"Hajj-e-Asghar"<<endl;
      else
        return 0;
      cnt++;
    }



return 0;
}
