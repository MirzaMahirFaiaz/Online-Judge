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

    ll t,i,j,g1,s1,b1,g2,s2,b2;
    cin>>t;
    while(t--){
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        g1=g1+s1+b1;
        g2=g2+s2+b2;
        if(g1>g2)
        cout<<"1"<<endl;
        else
          cout<<"2"<<endl;
    }

return 0;
}
