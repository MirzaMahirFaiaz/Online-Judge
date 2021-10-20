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

    ll t,i,j,n,x,p,mar;
    cin>>t;
    while(t--){
        cin>>n>>x>>p;
        mar=x*3;
        mar=mar-(n-x);
        if(mar>=p)
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;
    }

return 0;
}
