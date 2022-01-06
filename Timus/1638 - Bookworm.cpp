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

    ll t,i,j,a,b,c,d;
    while(cin>>a>>b>>c>>d){
        ll ans = 0;
        if(c <= d)
            ans = (d-c-1)*(a + 2 * b)+2 * b;
        else
         ans = (c-d+1)*(a+2*b)-2*b;
        cout<<ans<<endl;
    }



return 0;
}
