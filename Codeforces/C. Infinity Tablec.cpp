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

    ll t,i,j,n,l,h,gap,r,c;
    cin>>t;
    while(t--){
        cin>>n;
        l=sqrt(n-1);
        gap=((l+1)*(l+1))-(l*l);
        h=gap/2;
        h++;
        h=(l*l)+h;
        if(n<=h){
            c=l+1;
            r=n-(l*l);
        }
        else
        {
            c=((gap/2)-(n-h))+1;
            r=l+1;
        }
        cout<<r<<" "<<c<<endl;
    }
return 0;
}
