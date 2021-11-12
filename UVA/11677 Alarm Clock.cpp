#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll h1,h2,m1,m2,ans=0;

    while(1){
        cin>>h1>>m1>>h2>>m2;
        if(h1==0&&m1==0&&h2==0&&m2==0){
            break;
        }
        if(h1==h2){
                if(m1>m2){
            ans=(24*60)+(60-m1)+m2;
            ans=ans-60;
                }
                else{
                    ans=m2-m1;
                }
        }
        else if(h1<h2){
                ans=((h2-h1)*60)+(60-m1)+m2;
                ans=ans-60;

        }
        else if(h1>h2){
            ans= (((23-h1)+h2)*60)+(60-m1)+m2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
