//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll tp,i,j,h,n,b,w,in,ans;

    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)==4)
    {
         ans=0;
        int f=0;
        for(i=0; i<h; i++)
        {
            //ispossible=1;
            cin>>tp;
            tp=tp*n;

            for(j=0; j<w; j++)
            {
                cin>>in;
                if(in>=n&&tp<=b)
                    if(ans>tp||ans==0)
                        ans=tp;
            }
        }
        if(ans==0)
            cout<<"stay home"<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
