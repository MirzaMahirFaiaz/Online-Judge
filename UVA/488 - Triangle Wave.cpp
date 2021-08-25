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

    ll t,i,j,f,a,k,l;
    cin>>t;

    for(l=1;l<=t;l++){
            cin>>a;
    cin>>f;

    for(i=0;i<f;i++){

        for(j=1;j<=a;j++){
            for(k=0;k<j;k++)
                cout<<j;
            cout<<endl;
        }
        for(j=a-1;j>0;j--){
            for(k=0;k<j;k++)
                cout<<j;
            cout<<endl;
        }
        if(i!=f-1)
            cout<<endl;

    }
    if(l!=t)
        cout<<endl;
    }
return 0;
}
