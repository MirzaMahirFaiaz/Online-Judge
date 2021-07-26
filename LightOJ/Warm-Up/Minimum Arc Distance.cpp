//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    ll ox,oy,ax,ay,bx,by,t,i,j,n;
     double o,a,b,arc,ang;

    cin>>t;
    for(i=1;i<=t;i++){
            cin>>ox>>oy>>ax>>ay>>bx>>by;

            o = sqrt(((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay)));
        b = sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));
        a = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));
        ang = acos(((a*a)+(b*b)-(o*o)) / (2.0*a*b));
        arc = a * ang;
        std::cout<<std::setprecision(6)<<std::fixed;
        cout<<"Case "<<i<<": "<<arc<<endl;
    }
   return 0;
}
