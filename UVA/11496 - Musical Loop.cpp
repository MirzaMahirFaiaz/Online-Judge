//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
int a[10005];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j,n,ans;
    bool godown, goup;
    while (cin>>n)
    {
        if(n==0)
            break;
        for (i=0; i<n; i++)
            cin>>a[i];
        godown = goup = false;
        ans = 0;
        if (a[n-1]<a[0])
            goup = true;
        else
            godown = true;
        a[n] = a[0];
        for (i=1; i<=n; i++)
            if (a[i-1]<a[i] && godown)
            {
                ans++;
                godown = false;
                goup = true;
            }
            else if (a[i-1]>a[i] && goup)
            {
                ans++;
                godown = true;
                goup = false;
            }
        cout<<ans<<endl;
    }

    return 0;
}
