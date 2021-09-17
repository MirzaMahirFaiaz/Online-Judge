#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        if(a>b)
            cout<<a-b<<endl;
        else
            cout<<b-a<<endl;
    }
    return 0;
}
