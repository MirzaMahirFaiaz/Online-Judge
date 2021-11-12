#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,i,h,m;
    cin>>t;
    while(t--){
        scanf("%lld:%lld", &h, &m);
        h=11-h+(m==0);
        if(h<=0)
            h+=12;
        m=60-m;
        if(m==60)
            m=0;
        printf("%02lld:%02lld\n", h, m);
    }
return 0;
}
