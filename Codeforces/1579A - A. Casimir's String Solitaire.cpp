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

    ll t,i,j,sz,cA,cB,cC;
    string s;
    cin>>t;
    while(t--){
            cA = 0,cB = 0,cC = 0;
        cin>>s;
        sz= s.size();
        for(i=0;i<sz;i++){

            if(s[i]=='A')
                cA++;
        else if(s[i]=='B')
            cB++;
        else
            cC++;
        }
        if(cA+cC==cB)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }



return 0;
}
