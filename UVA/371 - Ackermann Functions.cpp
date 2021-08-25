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


    ll l,h,cnt,cm,i,j,v,s;
    while(cin>>l>>h)
    {
        if(l==0 &&h==0)break;
        if(l>h)
        {
            cnt=h;
            h=l;
            l=cnt;
        }
        cm=0;
        for(i=l; i<=h; i++)
        {
            cnt=0;
            j=i;
            while(1)
            {
                if(j%2==0)j=j/2;
                else
                    j=3*j+1;
                cnt++;
                if(j==1)break;
            }
            if(cnt>cm)
            {
                cm=cnt;
                v=i;
            }
        }
        printf("Between %lld and %lld, %ld generates the longest sequence of %lld values.\n",l,h,v,cm);
    }

return 0;
}
