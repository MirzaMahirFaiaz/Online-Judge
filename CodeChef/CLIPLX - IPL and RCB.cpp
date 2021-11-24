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
        j= x-y;
        if(j<=0)
            cout<<"0"<<endl;
        else
            cout<<j<<endl;
    }

return 0;
}
