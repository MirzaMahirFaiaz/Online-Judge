//@author MIRZA MAHIR FAIAZ, Dept. of CSE, AUST
#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define PI acos(-1)
using namespace std;
int ar[4];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i,j;
    string s;
    for(i=0;i<3;i++){
        cin>>s;
        //ABC, ARC, AGC, and AHC
        if(s=="ABC")
            ar[0]++;
        else if(s=="ARC")
            ar[1]++;
        else if(s=="AGC")
            ar[2]++;
        else if(s=="AHC")
            ar[3]++;
    }
    if(ar[0]==0)
        cout<<"ABC"<<endl;
    else if(ar[1]==0)
        cout<<"ARC"<<endl;
    else if(ar[2]==0)
        cout<<"AGC"<<endl;
    else if(ar[3]==0)
        cout<<"AHC"<<endl;
return 0;
}
