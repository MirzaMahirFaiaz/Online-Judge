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

    ll t,i,j,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n][5];
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
                cin>>a[i][j];
        }
        bool ok=0;
        for(i=0; i<4; i++)
        {
            for(j=i+1; j<5; j++)
            {
                ll first=0,second=0,both=0;
                for(k=0; k<n; k++)
                {
                    if(a[k][i]==1 && a[k][j]==1)
                        both++;
                    else if(a[k][i]==1)
                        first++;
                    else if(a[k][j]==1)
                        second++;
                }
                ll needF=n/2 - first, needS=n/2 - second;
                if(needF>=0 && needS>=0 && both==needF+needS)
                {
                    ok=1;
                    break;
                }
            }
            if(ok==1)
                break;
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
