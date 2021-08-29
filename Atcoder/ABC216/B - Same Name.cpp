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

    ll t,i,j,n;
    bool isMatched=false;
    string ins,ins1;
    vector<string>fmly,gn;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ins>>ins1;
        fmly.push_back(ins);
        gn.push_back(ins1);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(fmly[i]==fmly[j]){
               if(gn[i]==gn[j])
                    isMatched=true;
            }
        }
    }
if(isMatched)
    cout<<"Yes"<<endl;
else
    cout<<"No"<<endl;


return 0;
}
