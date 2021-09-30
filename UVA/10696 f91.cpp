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

    while(1){
        cin>>t;
        if(t==0){
            break;
        }
        //cout<<"f91("<<t<<") = "<<f91(t)<<endl;
        if(t>100)
            cout<<"f91("<<t<<") = "<<t-10<<endl;
        else
            cout<<"f91("<<t<<") = 91"<<endl;
    }

return 0;
}
