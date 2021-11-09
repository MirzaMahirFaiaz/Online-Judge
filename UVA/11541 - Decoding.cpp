//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
ll stringtodigit(char ar[],ll sz)
{
    ll ans=0;
    for(int i=0; i<sz; i++)
    {
        ans= (ar[i]-'0')+(ans*10);
    }
    return ans;
}

int main()
{

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    ll t,i,j,sz,k,num,n;
    string s;
    char ar[5];
    cin>>t;
    for(i=1; i<=t; i++)
    {
        n=0;
        cin>>s;
        sz= s.size();
        cout<<"Case "<<i<<": ";
        for(j=0; j<sz; j++)
        {
            if(s[j+1]>='0'&&s[j+1]<='9')
            {
                ar[n++]=s[j+1];
            }
            else
            {
                num= stringtodigit(ar,n);
                //cout<<"Num "<<num<<endl;
                for(k=0; k<num; k++)
                    cout<<s[j-n];
                n=0;

            }

        }
        cout<<endl;
    }



    return 0;
}
