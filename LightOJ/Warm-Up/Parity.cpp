//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main(){
    ll i,t,j,n,c;

    cin>>t;

    for(i=0;i<t;i++){
            c=0;
        cin>>n;

        while(n){
            c=c+n%2;
    n=n/2;
        }
        if(c%2==1){
            cout<<"Case "<<i+1<<": odd"<<endl;
        }
        else
            cout<<"Case "<<i+1<<": even"<<endl;

    }
    return 0;
}
