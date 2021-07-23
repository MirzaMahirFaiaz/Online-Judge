//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int DectoBin(int n)
{
        int d = 1,bin = 0;
        while(n>0)
        {
        bin+=n%2*d;
        d*=10;
        n/=2;

        }
        return bin;
}
int main()
{
        ll t,da,db,dc,dd,ba,bb,bc,bd,i;
        cin>>t;

        for(i =1; i<t;i++)
        {
                scanf("%lld.%lld.%lld.%lld",&da,&db,&dc,&dd);
                scanf("%lld.%lld.%lld.%lld",&ba,&bb,&bc,&bd);

                if(DectoBin(da)==ba&&DectoBin(db)==bb&&DectoBin(dc)==bc&&DectoBin(dd)==bd)
                cout<<"Case "<<i<<": Yes"<<endl;
                else
                cout<<"Case "<<i<<": No"<<endl;

        }
        return 0;

}
