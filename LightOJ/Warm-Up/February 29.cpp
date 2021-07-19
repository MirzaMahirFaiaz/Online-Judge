//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{
    long long int d1,d2,y1,y2,i,j,k,l,t,x,y,z,u,w;
    string m1,m2;;
    char c;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m1>>d1>>c>>y1;
        cin>>m2>>d2>>c>>y2;
        l=0;

        if(m1=="January" || m1=="February")
        {
            y1=y1;
        }
        else
        {
            y1++;
        }
        if(m2=="January" || (m2=="February" && d2<29))
        {
            y2--;
        }

            y=(y2/4)-((y1-1)/4);
            z=(y2/100)-((y1-1)/100);
            w=(y2/400)-((y1-1)/400);
            l=(y-z+w);

        cout<<"Case "<<i<<": "<<l<<endl;

    }
  return 0;
}
