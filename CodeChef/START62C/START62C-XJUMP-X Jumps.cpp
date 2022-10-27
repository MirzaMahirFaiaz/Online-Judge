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

    ll t,i,j,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        i=x/y;
        i+=(x%y);
        cout<<i<<endl;
    }

return 0;
}
