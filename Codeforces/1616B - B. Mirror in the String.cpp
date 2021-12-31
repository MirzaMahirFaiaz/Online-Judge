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
    while(t--){
         ll n;
    cin>>n;
    string s;
    cin>>s;
    string sn="";
    sn+=s[0];
    bool ok=false;
    for(i=0;i<n;i++)
    {
        if(i==0)
            continue;
        if(s[i]<s[i-1]){
            sn+=s[i];
            ok=true;
        }
        else if(s[i]==s[i-1]){
            if(ok)
                sn+=s[i];
            else
                break;
        }
        else
            break;
    }
    cout<<sn;
    reverse(sn.begin(),sn.end());
    cout<<sn<<endl;
    }

return 0;
}
