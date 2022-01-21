//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

int main()
{

   // ios_base::sync_with_stdio(false);
   // cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--){
            ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>v;
    bool two=false,three=false,four=false,se=false;
    set<ll>st;
    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
            v.push_back(i);
    }
    if(v.size()==0||v.size()==1)
    {
        cout<<"-1\n";
        continue;
    }
    ll sz= v.size();
    for(i=0;i<sz-1;i++)
    {
        if(v[i+1]-v[i]==1)
        {
            two=true;
            break;
        }
        else if(v[i+1]-v[i]==2)
        {
            three=true;
        }
        else if(v[i+1]-v[i]==3)
        {
            if(s[v[i]+1]!=s[v[i]+2])
            {
                four=true;
            }
            else
            {
                if(i+1<v.size()-1)
                {
                    if(v[i+2]-v[i+1]==3)
                    {
                        if(s[v[i+1]+1]==s[v[i+1]+2])
                        {
                            if(s[v[i+1]+1]!=s[v[i]+1])
                            se=true;
                        }
                    }
                }
            }
        }
    }
    if(two)
    cout<<"2\n";
    else if(three)
    cout<<"3\n";
    else if(four)
    cout<<"4\n";
    else if(se)
    cout<<"7\n";
    else
     cout<<"-1\n";

    }

return 0;
}
