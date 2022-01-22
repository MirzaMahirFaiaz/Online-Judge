//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        if(l==r)
        {
            if(l>1)
            {
                cout<<"YES\n";
                continue;
            }
            else
            {
                cout<<"NO\n";
                continue;
            }
        }
        ll temp = ceil((double)(r-l)/2);
        if(r%2!=0&&l%2!=0)
            temp++;
        if(k<temp)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }

return 0;
}
