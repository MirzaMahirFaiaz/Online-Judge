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

    ll t,a,b;
    cin>>t;

    while(t--){
        cin>>a>>b;
        a/=3;
        b/=3;
        cout<<a*b<<endl;
    }

return 0;
}
