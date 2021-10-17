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

    ll t,i,j,k,p,a,b,s;
        cin>>k;
        for(p=1;p<=k;p++){
            s=0;
            cin>>a>>b;
            for(i=1;i*i<=a;i++){
                if(i*i==a & i%b!=0)
                    s+=i;
                else if(a%i==0){
                    if(i%b!=0)
                        s+=i;
                    if((a/i)%b!=0)
                        s+=(a/i);
                }
            }
            cout<<s<<endl;
        }

return 0;
}
