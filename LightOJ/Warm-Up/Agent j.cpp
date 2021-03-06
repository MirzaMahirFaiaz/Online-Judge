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
    int t, i;
    double res, tri_area, r1, r2, r3, a, b, c, angle_a, angle_b, angle_c, area_r1, area_r2, area_r3, s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        angle_a=acos((b*b+c*c-a*a)/(2*b*c))*180.0/PI;
        angle_b=acos((a*a+c*c-b*b)/(2*a*c))*180.0/PI;
        angle_c=acos((b*b+a*a-c*c)/(2*b*a))*180.0/PI;
        area_r1=0.5*(r1*r1)*(angle_c*(PI/180.0));
        area_r2=0.5*(r2*r2)*(angle_b*(PI/180.0));
        area_r3=0.5*(r3*r3)*(angle_a*(PI/180.0));
        s=(a+b+c)/2.0;
        tri_area=sqrt(s*(s-a)*(s-b)*(s-c));
        res=tri_area-(area_r1+area_r2+area_r3);
        printf("Case %d: %lf\n",i,res);
    }
    return 0;
}

