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

    ll t,i,j,n,sz1,sz;
    string s;
    while(1)
    {
        cin>>n;
        if(n==0)
            return 0;
        cin>>s;
        sz= s.size();
        sz1=sz/n;
        int tm=sz1;
        int tmp=0;
        for(j=0; j<n; j++)
        {
            for(i=sz1-1; i>=tmp; i--)
            {
                cout<<s[i];
            }
            sz1+=tm;
            tmp+=tm;
            //cout<<tmp<<"  size of 1 grp-"<<sz1<<endl;
        }
        cout<<endl;
    }

    return 0;
}
