//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;

bool isprime[1030];

void seive(){
    memset(isprime, true, sizeof(isprime));
    ll i,j;

    for(i=2;i*i<1030;i++){
        if(isprime[i]==true){
            for(j=i*i;j<1030;j=j+i){
                isprime[j]=false;
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seive();

    ll t,i,j,n,sum;
    string s;

    while(cin>>s){
            sum =0;
        for(i=0;i<s.size();i++){
                if(s[i]>='a'&&s[i]<='z')
                sum=sum+(s[i]-96);
        else
            sum=sum+(s[i]-38);

        }
        if(isprime[sum]==true){
            cout<<"It is a prime word."<<endl;
        }
        else
            cout<<"It is not a prime word."<<endl;

    }
return 0;
}
