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
    ll n,i,j,x1,y1,x2,y2,t;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>x1>>y1>>x2>>y2;
        if((x1+y1)%2!=(x2+y2)%2)
            cout<<"Case "<<i<<": impossible"<<endl;
        else if(((x1+y1)==(x2+y2))||((x1-y1)==(x2-y2))){
            cout<<"Case "<<i<<": 1"<<endl;
        }
        else{
            cout<<"Case "<<i<<": 2"<<endl;
        }

    }
    return 0;
}
