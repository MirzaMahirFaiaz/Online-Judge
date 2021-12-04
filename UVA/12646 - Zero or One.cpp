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

    ll t,a,b,c;

    while(cin>>a>>b>>c){
        if(a==b&&b==c)
            cout<<"*"<<endl;
        else if(a==b)
            cout<<"C"<<endl;
        else if(b==c)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
return 0;
}
