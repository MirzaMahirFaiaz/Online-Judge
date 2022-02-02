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

    ll t,i,j;
    cin>>t;
    while(t--){
            ll n;
        cin>>n;
        ll x = 0;
        for(i= 31;i>=0;i--){
            if((1<<i)&(n-1)){
                x=i;
                break;
            }
        }
        ll st = pow(2, x);
        for(i= 1;i<st;i++)
            cout<<i<<" ";
        cout<<0<<" ";
        for(i =st;i<=n-1;i++){
            cout<<i<<" ";
        }
        cout<<endl;

    }



return 0;
}
