#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll i,n,j,a,b,sq;

    while(1){
        cin>>a>>b;

        if(a==0&&b==0)
            break;
            j=0;
            for(i=a;i<=b;i++){
            sq=sqrt(i);
            if(i==sq*sq)
                j++;
        }
        cout<<j<<endl;
    }
   return 0;
}
