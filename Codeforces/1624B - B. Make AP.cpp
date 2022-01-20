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

    ll t,i,j,a,b,c;
    cin>>t;
    while(t--){

        cin>>a>>b>>c;
        if((a+c)%(2*b)==0)
            cout<<"YES"<<endl;
        else if((2*b-a)>0 && (2*b-a)%c==0)
        cout<<"YES"<<endl;
        else if((2*b-c)>0 && (2*b-c)%a==0)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

return 0;
}
