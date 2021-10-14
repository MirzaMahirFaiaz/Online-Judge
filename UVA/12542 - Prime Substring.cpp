//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
#define MAX	100001
using namespace std;

bitset<MAX>bt;
void sieve()
    {
        bt[0]=bt[1]=1;
        for(int i=4;i<MAX;i+=2)
            bt[i]=1;
        for(int i=3;i*i<=MAX;i+=2){
            if(!bt[i]){
                for(int j=i*i;j<MAX;j+=i)
                bt[j]=1;
            }
        }
    }


int main()
{

    sieve();
    ll i,t,r,j,sz;

        string s;
        while(cin>>s){
            if(s=="0")
                break;
            r=0;
            sz= s.size();
            for(i=0;i<sz;i++){
                t=s[i]-48;
                if(!bt[t])
                    r=max(r,t);

                for(j=i+1;j<sz;j++){
                    t*=10;
                    t+=s[j]-48;
                    if(t>=MAX)
                        break;
                    if(!bt[t])
                    r=max(r,t);
                }
            }
           cout<<r<<endl;
        }
        return 0;
}
