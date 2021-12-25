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
        ll x,y;
        cin>>x>>y;
        ll d=x+y;
        if(d&1){
            cout<<"-1 -1"<<endl;
            continue;
        }
        ll a=x/2;
        ll b= y/2;
        if(x&1){
            a++;
        }
        cout<<a<<" "<<b<<endl;
    }

return 0;
}
