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

    ll t,i,j,a,b;

    cin>>t;
    while(t--){
        cin>>a>>b;
        if(b>a)
        cout<<"impossible"<<endl;
        else{

        i=(a+b)/2;
        j=(a-b)/2;
        if(i+j==a&& abs(i-j)==b)
            cout<<i<<" "<<j<<endl;
            else
             cout<<"impossible"<<endl;
        }

    }
return 0;
}
