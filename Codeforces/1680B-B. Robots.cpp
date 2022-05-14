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

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll col=999,colr,row=999,rowc;
        for(i=0; i<n; i++)
        {
            string s;
            cin>>s;
            for(j=0; j<m; j++)
            {
                if(s[j]=='R' && col>j)
                {
                    col=j;
                    colr=i;
                }
                if(s[j]=='R' && row>i)
                {
                    row=i;
                    rowc=j;
                }

            }
        }

        if(col<rowc && colr>row)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
