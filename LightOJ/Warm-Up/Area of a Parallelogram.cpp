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
    ll t,i,j,ax,ay,bx,by,cx,cy,dx,dy,area;

    cin>>t;

    for(i=1;i<=t;i++){

        cin>>ax>>ay>>bx>>by>>cx>>cy;

        dx=cx-(bx-ax);
        dy= ay+(cy-by);

        area=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));

        if(area<0)
            area=area*(-1);
        area=area*0.5;

        cout<<"Case "<<i<<": "<<dx<<" "<<dy<<" "<<area<<endl;

    }
    return 0;
}
