#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,i,n,sum,j;
    string s;

    cin>>t;
    for(i=1;i<=t;i++){
            sum=0;
            fflush(stdin);
        cin>>s;
        for(j=0;j<s.size();j++){
            sum=sum+(int)(s[j]-48);
        }
        cout<<sum<<endl;;
    }
return 0;
}
