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

    ll t,i,j,b,a,ans;
    while(cin>>a>>b)
    {
        ans=a;
        while(a/b>=1)
        {
            ans+=a/b;
            a=(a%b)+a/b;
        }
        cout<<ans<<endl;
    }
    return 0;
}
