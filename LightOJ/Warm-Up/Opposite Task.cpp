//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main(){
    ll t,i,j,n;

    cin>>t;

    while(t--){
        cin>>n;
        j=0;

        if(n>=10)
        j=n-10;
        cout<<j<<" "<<n-j<<endl;
    }


return 0;
}
