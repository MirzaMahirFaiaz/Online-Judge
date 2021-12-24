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
        ll n,m;
        cin>>n>>m;
        if(n==1 && m==1){
            cout<<"0"<<endl;
        }else if(n==1 || m==1){
        cout<<"1"<<endl;
        }else
        cout<<"2"<<endl;
    }

return 0;
}
