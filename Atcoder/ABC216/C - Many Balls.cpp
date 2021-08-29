//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

void recs(ll n){
    if(n==1){
        cout<<"A";
        return;
    }
    else if(n==2)
    {
        cout<<"AA";
        return;
    }
    else if(n%2!=0){
        recs(n-1);
        cout<<"A";
    }
    else if(n%2==0){
        recs(n/2);
        cout<<"B";
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,n;
    cin>>n;
    recs(n);
    cout<<endl;

return 0;
}
