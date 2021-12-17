//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

void solve(){
    ll n,i;
      bool flag = 0;
        cin>>n;
        ll arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        ll g=arr[0];
        ll ans=0;
        for(i=2; i<n; i++)
        {
            if(i%2==0)
                g=__gcd(g,arr[i]);
        }
        bool ok=true;
        for(i=1; i<n; i+=2)
        {
            if(arr[i]%g==0)
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            cout<<g<<endl;
           return;
        }

            g=arr[1];
            for(i=2; i<n; i++)
            {
                if(i%2==1)
                    g=__gcd(g,arr[i]);
            }
            ok=true;
            for(i=0; i<n; i+=2)
            {
                if(arr[i]%g==0)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                cout<<g<<endl;
               return;
            }

                cout<<"0"<<endl;
                return ;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    cin>>t;
    while(t--)
    {
      solve();
    }

    return 0;
}
