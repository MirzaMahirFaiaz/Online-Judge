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
        n=n*315+36962;
        n/=10;
        if(n<0)
            n=n*(-1);
        cout<<n%10<<endl;
    }

return 0;
}
