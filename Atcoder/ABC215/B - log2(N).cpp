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

    ll t,n,cnt=0;

    cin>>n;
    while(n/2!=0){
        cnt++;
        n/=2;

    }
 cout<<cnt<<endl;
return 0;
}
