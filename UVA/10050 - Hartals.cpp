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

    ll t,i,j,n,p,a[100];
    cin>>t;
    while(t--){
        cin>>n>>p;

        for(i = 0;i<p;++i)
            cin>>a[i];

        int ans = 0;

        for(i = 1;i<=n;++i){
            if(i%7==6 || i%7==0)
             continue;

            bool found = false;

            for(j = 0;j<p;++j)
                if(i%a[j]==0)
                    found = true;

            if(found)
                ++ans;
        }

       cout<<ans<<endl;
    }



return 0;
}
