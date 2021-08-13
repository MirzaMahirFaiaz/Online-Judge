//Incomplete
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

    ll t,i,j,n;
    double d;
   cin>>t;
        while(t--)
        {
        cin>>n;
        if(n<0)
            cout<<"0"<<endl;
        else if(n<=1)
            cout<<"1"<<endl;
        else{
        d=0;
        for(i=2;i<=n;i++){
        d=d+(log(i)/log(10));
        }
        j= floor(d)+1;
        cout<<j<<endl;
        }
        }

return 0;
}
