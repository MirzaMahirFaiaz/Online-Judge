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

    ll t,i,j,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        j = a+b+c;
        if(j%3>=1)
        cout<<"1"<<endl;
         else
        cout<<"0"<<endl;
    }
return 0;
}
