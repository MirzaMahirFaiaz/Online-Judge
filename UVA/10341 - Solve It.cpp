//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#include<math.h>
#define ll long long
#define PI acos(-1)
using namespace std;

double p,q,r,s,t,u;

double chk(double x){
    return p/exp(x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x + u;

}
double BS(){
    double high=1,low=0,res,mid,ans,res2;
    while(high-low>0.0000001){

    mid=(high+low)/2;
    res = chk(mid);
    res2 = chk(low);
    if(res * res2<=0)
            high = mid;
    else
        low= mid;
    }
    return (low+high)/2;
}

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll i,j;
    while(cin>>p>>q>>r>>s>>t>>u){

        if (chk(0) * chk(1)>0)
            cout<<"No solution"<<endl;
        else
            printf("%.4lf\n",BS());
    }
return 0;
}
