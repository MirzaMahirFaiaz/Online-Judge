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
        string s;
        cin>>s;
        int ans = 0;
        int a=0,b=0;
        ll sz = s.size();
        for(i=0;i<sz;i++)
        {
           if(s[i]=='A')
           a++;
           else
                b++;
           if(b>a)
           {
               ans=1;
               break;
           }
        }
        if(s[0]=='B' || ans==1 || s[s.size()-1]!='B')
            cout<<"NO"<<endl;
        else
         cout<<"YES"<<endl;
    }

return 0;
}
