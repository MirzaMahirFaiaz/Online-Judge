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

    ll t,i,j;
    cin>>t;
    while(t--){
        cin>>j;
        i=j%4;
        if(i==0){
            cout<<"North"<<endl;
        }
        else if(i==1){
            cout<<"East"<<endl;
        }
        else if(i==2){
            cout<<"South"<<endl;
        }
        else{
            cout<<"West"<<endl;
        }
    }

return 0;
}
