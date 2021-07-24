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

    ll t,i,j=0;
    ll ar[5]={0};

    string s;

    t=4;
    while(t--){
        cin>>s;
        if(s=="H")
            ar[0]=1;
        else if(s=="2B")
            ar[1]=1;
        else if(s=="3B")
            ar[2]=1;
        else if(s=="HR")
            ar[3]=1;

    }
    for(i=0;i<4;i++){
        if(ar[i]!=1)
            j=1;
    }
    if(j==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

return 0;
}
