//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    ll cs,i,j,x1,x2,y1,y2,n,c1,c2;

    cin>>cs;

    for(i=0;i<cs;i++){
            cout<<"Case "<<i+1<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;

        //cout<<"Case "<<i+1<<":"<<endl;
        cin>>n;
        while(n--){
                cin>>c1>>c2;
        if((c1>x1&&c1<x2)&&(c2>y1&&c2<y2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

        }

    }

    return 0;
}
