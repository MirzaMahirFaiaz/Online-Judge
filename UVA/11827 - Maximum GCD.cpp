//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

ll GCD(ll a, ll b )
{
    while ( b )
    {
        a = a % b;
        swap ( a, b );
    }
    return a;
}

int main()
{

    ll i,j,t,n,z;
    string str;

    cin>>t;
    getchar();

    while(t--)
    {

        n=0, i=0, j=0;
        ll m[1000]= {0};
        getline(cin, str);

        ll temp=0,sz;
        sz=str.size();

        while(i<sz)
        {
            if(str[i]<='9'&&str[i]>='0')
                temp = temp*10 + (int)(str[i]-'0');
            else
            {
                if(temp > 0)
                {
                    m[n++] = temp;
                    temp = 0;
                }
            }
            i++;
        }
        if(temp != 0)
            m[n++] = temp;

        if(n==1)
        {
            cout<<m[n-1]<<endl;
            continue;
        }
        sort(m, m+n);
        ll ans = -999;

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                ll gcd =GCD(m[j],m[i]);

                if(ans< gcd)
                {
                    ans =gcd ;
                }
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
