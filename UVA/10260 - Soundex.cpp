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

    ll t,i,j,ax1,ax2;
    string s;

    while(cin>>s)
    {
        ax1=-1;
        ll sz= s.size();
        for(i=0; i<sz; i++)
        {
            if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
                ax2=2;
            else if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
                ax2=1;
            else if(s[i]=='D'||s[i]=='T')
                ax2=3;
            else if(s[i]=='M'||s[i]=='N')
                ax2=5;
            else if(s[i]=='L')
                ax2=4;
            else if(s[i]=='R')
                ax2=6;
            else ax2=-1;

            if(ax2!=ax1 && ax2!=-1)
                cout<<ax2;

            ax1=ax2;
        }
        cout<<endl;
    }

    return 0;
}
