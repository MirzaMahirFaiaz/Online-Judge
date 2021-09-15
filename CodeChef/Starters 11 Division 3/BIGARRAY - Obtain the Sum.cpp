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

    ll t,i,j,n,s;
    cin>>t;
    while(t--){
            cin>>n>>s;
    ll sum = (n*(n+1))/2;
    if(sum-s<=n&&sum-s>0)
        cout<<sum-s<<endl;
    else
        cout<<"-1"<<endl;
    }

return 0;
}
