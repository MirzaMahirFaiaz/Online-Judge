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

    ll t,i,j,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        j=y/x;
        if((j<=n && j>0 && j*x==y) || y==0  ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


return 0;
}
