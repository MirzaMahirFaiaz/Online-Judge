//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main(){

    long long int n,ans=1;

    cin>>n;
    while(n--){
        ans=2*ans;
        ans= ans%1000000007;
    }

    cout<<ans<<endl;
    return 0;
}
