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
    double t1,t2,r1,r2;
    cin>>t;
    while(t--){
        cin>>t1>>t2>>r1>>r2;
        t1*=t1;
        t2*=t2;
        r1*=(r1*r1);
        r2*=(r2*r2);
        //cout<<t1/r1<<" "<<t2/r2<<endl;
        if((t1/r1)==(t2/r2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }



return 0;
}
