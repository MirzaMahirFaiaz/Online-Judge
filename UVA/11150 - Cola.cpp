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

    ll t,i,j,n,ans;

    while(scanf("%lld",&n)!=EOF){
        ans=n;
        while(n>2){
            ans+=(n/3);
            n=(n%3)+(n/3);
        }
        if(n==2)
            cout<<ans+1<<endl;
        else
            cout<<ans<<endl;
    }

return 0;
}
