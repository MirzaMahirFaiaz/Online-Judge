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

    ll t,i,j,s,k;
    ll cnt=0;
    cin>>s>>t;
    for(i=0;i<=s;i++){
        for(j=0;j<=s;j++){
            for(k=0;k<=s;k++){
                if((i*j*k<=t)&&(i+j+k<=s)){
                    cnt++;
                   // cout<<i<<" "<<j<<" "<<k<<endl;
                }
            }
        }
    }
    cout<<cnt<<endl;
return 0;
}
