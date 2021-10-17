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

    ll i,j;
    double time=0,st=0,d=0,a,b;
    vector<double>A,B;
    cin>>j;
    for(i=0;i<j;i++){
        cin>>a>>b;
        time+=a/b;
        A.push_back(a);
        B.push_back(b);
    }
    time/=2.0;
    i=0;
    while(time-st>0.000001){
        if(st+(A[i]/B[i])<=time){
            d= d + A[i];
            st=st + (A[i]/B[i]);
            i++;
        }
        else{
            d+=B[i]*(time-st);
            st+=time-st;
            // cout<<"else- "<<d<<"time st-"<<time<<" "<<st<<endl;
        }

    }
cout.precision(8);
cout<<d<<endl;

return 0;
}
