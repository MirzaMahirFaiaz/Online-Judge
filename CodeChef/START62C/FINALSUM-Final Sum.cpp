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

    ll t,i,j,ans=0,in,l,r,q,n;
    cin>>t;
    while(t--)
    {
        ans=0;a
        cin>>n>>q;
        while(n--)
        {
            cin>>in;
            ans+=in;
        }
        while(q--)
        {
            cin>>l>>r;
            if(l==r || (r-l)%2==0)
            {
               ans+=1;
            }

        }
        cout<<ans<<endl;
    }



    return 0;
}
