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
    cin>>t;
    while(t--){
        cin>>n;
        double x = pow(0.143*n,n);
        if((x-floor(x))<0.5)
            cout<<floor(x)<<endl;
        else
            cout<<floor(x)+1<<endl;
    }



return 0;
}
