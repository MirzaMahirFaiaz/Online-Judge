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
 
    ll t,i,j,n;
    string s;
    cin>>t;
    while(t--)
    {
        ll ans=0;
        cin>>n;
        cin>>s;
        ans= s[n-1]-'0';
        for(i=n-2; i>=0; i--)
        {
            if(s[i]!='0')
                ans+= s[i]-'0'+1;
        }
 
        cout<<ans<<endl;
    }
    return 0;
}
