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

    ll t,n,p;
    cin>>t;
    while(t--){
        cin>>n>>p;
        ll m,w;
        if(n<=2){
            cout<<p*p*p<<endl;
        }
        else{
        m = (n-1)/2;
        w = (p-m)*(p-m);
        w+= (p-n)*(p-m);
        w+= (p-n)*(p-n);
        cout<<w<<endl;
        }
    }

return 0;
}
